/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:32:45 by mlee              #+#    #+#             */
/*   Updated: 2024/07/06 13:49:50 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *base)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	j = 0;
	while (base[len] != '\0')
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		len++;
	}
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		len;
	int		num;
	char	result[50];

	i = 0;
	len = ft_len(base);
	if (len < 2)
		return ;
	if (nbr == 0)
		write(1, &base[0], 1);
	if (nbr < 0)
		write(1, "-", 1);
	while (nbr != 0)
	{
		num = nbr % len;
		if (num < 0)
			num *= (-1);
		result[i++] = base[num];
		nbr /= len;
	}
	while (i > 0)
		write(1, &result[--i], 1);
}
