/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:12:40 by mlee              #+#    #+#             */
/*   Updated: 2024/07/06 18:25:38 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	char	*space;

	space = " \n\t\v\f\r";
	while (*space != '\0')
	{
		if (c == *space)
			return (1);
		space++;
	}
	return (0);
}

int	find_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	sanitized_base(char *base)
{
	char	*buffer;
	int		n;

	n = 0;
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base == ' ')
			return (0);
		buffer = base;
		while (*buffer++)
		{
			if (*buffer == *base)
				return (0);
		}
		n++;
		base++;
	}
	return (n);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	i;
	int	len;

	result = 0;
	sign = 1;
	i = 0;
	len = 0;
	len = sanitized_base(base);
	if (len < 2)
		return (0);
	while (is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (find_base(base, str[i]) != -1)
		result = result * len + find_base(base, str[i++]);
	return (result * sign);
}
