/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:07:06 by mlee              #+#    #+#             */
/*   Updated: 2024/07/13 16:08:56 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	arr = (int *)malloc(sizeof(int) * range);
	if (arr == 0)
		return (0);
	while (i < range)
		arr[i++] = min++;
	return (arr);
}
