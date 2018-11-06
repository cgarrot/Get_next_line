/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 22:19:50 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/06 16:35:43 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

#define BUFF_SIZE 100

char	*ft_strndup(const char *s1, size_t len)
{
	char	*dup;

	if (!(dup = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	else
		dup = ft_strncpy(dup, s1, len);
	return (dup);
}

int		get_next_line(const int fd, char **line)
{
	int				ret;
	char			buff[BUFF_SIZE + 1];
	static char		*str;
	int				i;
	char			*tmp;

	i = 0;
	if (!str)
		str = "";
	else
	{
		//if (!(str = malloc(sizeof(char) * BUFF_SIZE + 1)))
		//	return (0);
		str = ft_strjoin(str, buff);
		//str = ft_strdup(buff);
	}
	while (!(ft_strchr(str, '\n')) && (ret = read(fd, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		str = ft_strjoin(str, buff);
	}
	/*if (str[i] == '\0' && ret == 0)
	  return (0);*/
	if (str[i])
	{
		while (str[i] != '\n' && str[i])
			i++;
		if (str[i] == '\n')
		{
			*line = ft_strndup(str, i);
			tmp = ft_strdup(str + i + 1);
			free(str);
			str = tmp;
			if (str[0] == '\0')
				ft_strdel(&str);
		}
		else if (str[i] == '\0')
		{
			if (ret == BUFF_SIZE)
				return (get_next_line(fd, line));
			*line = ft_strdup(str);
			ft_strdel(&str);
		}
		return (1);
	}
	/*if (str[i])
	  {
	  while (str[i] != '\n' && str[i])
	  i++;
	//if (i == 0)
	//	*line = ft_strdup("");
	//else
	//{
	 *line = ft_strndup(str, i);
	 str = &str[i + 1];
	//printf("%s", str);
	//}
	return (1);
	}*/
	return (0);
}

int		main(int ac, char **av)
{
	int		fd;
	char	*line;
	int		i;

	line = NULL;
	i = 0;
	fd = open(av[ac - 1], O_RDONLY);
	while (get_next_line(fd, &line) && i != 60)
	{
		printf("%d:  %s\n", i, line);
		free(line);
		i++;
	}
	close(fd);
}
