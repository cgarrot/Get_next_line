/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 23:34:20 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 02:02:02 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char		*h;
	const char		*n;
	unsigned int	i;

	i = 0;
	if (!*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*h == *n && (*h && *n) != 0 && i != len)
		{
			h++;
			n++;
			i++;
		}
		if (!*n)
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
