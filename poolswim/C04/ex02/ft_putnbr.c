/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:06:28 by mlee              #+#    #+#             */
/*   Updated: 2024/07/06 17:10:07 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c, int len)
{
	while (len > 0)
	{
		write(1, &c[len - 1], 1);
		len--;
	}
}

int	err_check(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	char	arr[12];
	int		i;
	char	num;

	if (err_check(nb))
		return ;
	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (nb != 0)
	{
		num = nb % 10 + '0';
		arr[i++] = num;
		nb /= 10;
	}
	arr[i] = '\0';
	ft_putchar(arr, i);
}
