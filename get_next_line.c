/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 22:19:50 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/07 04:25:28 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int		past_line(char **str, int i, char **line, const int fd)
{
	if (str[fd][i])
	{
		if (ft_strchr(str[fd], '\n'))
		{
			while (str[fd][i] != '\n' && str[fd][i])
				i++;
			*line = ft_strsub(str[fd], 0, i);
			str[fd] = &str[fd][i + 1];
			return (1);
		}
		else
		{
			*line = ft_strdup(str[fd]);
			str[fd][0] = '\0';
		}
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	int				ret;
	char			buff[BUFF_SIZE + 1];
	static char		*str[10240];
	int				i;
	char			*tmp;

	i = 0;
	if (fd < 0)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strnew(0);
	while ((ret = read(fd, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		tmp = str[fd];
		str[fd] = ft_strjoin(tmp, buff);
		free(tmp);
		if (ret < 0)
			return (-1);
	}
	if (str[fd][i] == '\0')
		return (0);
	if (past_line(str, i, line, fd) == 1)
		;
	return (1);
}

/*int		main(int ac, char **av)
{
	int		fd;
	char	*line;
	int		i;

	line = NULL;
	i = 0;
	fd = open(av[ac - 1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%d:  %s\n", i, line);
		free(line);
		i++;
	}
	close(fd);
}*/
