/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:34:56 by mlee              #+#    #+#             */
/*   Updated: 2024/07/05 15:40:49 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	char	*space;
	int		i;

	i = 0;
	space = " \n\t\v\f\r";
	while (space[i] != '\0')
	{
		if (c == space[i])
			return (1);
		space++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	mcount;
	int	atoi;

	i = 0;
	mcount = 0;
	atoi = 0;
	while (is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mcount++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + str[i] - '0';
		i++;
	}
	if (mcount % 2 == 0)
		return (atoi);
	else
		return (atoi * -1);
}
