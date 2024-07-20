/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:56:17 by mlee              #+#    #+#             */
/*   Updated: 2024/07/04 15:18:46 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (1)
	{
		n = s1[i] - s2[i];
		if (n != 0)
			break ;
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (n);
}
