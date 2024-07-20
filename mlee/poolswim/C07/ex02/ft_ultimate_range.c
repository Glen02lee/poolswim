/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:09:16 by mlee              #+#    #+#             */
/*   Updated: 2024/07/13 16:10:02 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	r;
	int	i;

	r = max - min;
	if (r <= 0)
		return (0);
	ptr = (int *)malloc(sizeof(int) * r);
	if (ptr == 0)
		return (0);
	i = 0;
	while (min < max)
		ptr[i++] = min++;
	*range = ptr;
	return (r);
}
