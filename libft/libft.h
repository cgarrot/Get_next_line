/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 08:46:05 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 21:59:48 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct	s_list
{
	void		*content;
	size_t		content_size;
	struct		s_list *next;
}				t_list;

char		*ft_itoa(int n);
void		ft_putnbr(int n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
void		ft_putchar(char c);
void		ft_strclr(char *s);
void		ft_strdel(char **as);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
size_t		ft_strlen(const char *s);
int			ft_atoi(char const *str);
void		ft_putstr(char const *s);
void		*ft_memalloc(size_t size);
void		ft_putendl(char const *s);
char		*ft_strdup(const char *s1);
char		*ft_strtrim(char const *s);
void		ft_putnbr_fd(int n, int fd);
void		ft_bzero(void *s, size_t n);
void		ft_putchar_fd(char c, int fd);
char		*ft_strrchr(const char *s, int c);
void		ft_putstr_fd(char const *s, int fd);
char		*ft_strchr(const char *str, int c);
void		ft_putendl_fd(char const *s, int fd);
char		**ft_strsplit(char const *s, char c);
char		*ft_strcat(char *s1, const char *s2);
void		ft_striter(char *s, void (*f)(char*));
char		*ft_strcpy(char *dst, const char *src);
void		*ft_memset(void *b, int c, size_t len);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strequ(char const *s1, char const *s2);
void		*ft_memchr(const void *s, int c, size_t n);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
char		*ft_strncpy(char *dst, const char *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strstr(const char *haystack, const char *needle);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif
