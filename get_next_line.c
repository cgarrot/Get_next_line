/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 22:19:50 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 22:24:11 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

#define BUFF_SIZE 1

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

	i = 0;
	if (!(str = ft_strdup(buff + 1)))
		return (-1);
	while (ret = read(fd, buff, BUFF_SIZE) /*&& !(ft_strchr(buff, '\n'))*/)
	{
		buff[ret] = '\0';
		str = ft_strjoin(str, buff);
		if (str[i])
		{
			while (str[i] != '\n' && str[i])
				i++;
			*line = ft_strndup(str, i);
			return (1);
		}
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		fd;
	char	*line;
	int		i;

	line = NULL;
	i = 0;
	fd = open(av[ac-1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%d:%s\n", i, line);
		i++;
	}
	close(fd);
}
