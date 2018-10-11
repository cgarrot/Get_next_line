/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 06:12:07 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 06:17:00 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	if (n < 0 && n >= -2147483648)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 10 && n <= 2147483647)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n != -2147483648)
		ft_putchar(n + '0');
}
