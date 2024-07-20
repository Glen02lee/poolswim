/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:39:49 by mlee              #+#    #+#             */
/*   Updated: 2024/07/03 16:33:28 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		i;
	int		j;
	int		k;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			j = str[i] / 16;
			k = str[i] % 16;
			write(1, "\\", 1);
			write(1, &hex[j], 1);
			write(1, &hex[k], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
