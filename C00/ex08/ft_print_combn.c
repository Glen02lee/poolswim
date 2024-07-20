/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:55:38 by mlee              #+#    #+#             */
/*   Updated: 2024/06/30 17:04:36 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	result(char *arr, int start, int end)
{
	int	num;

	num = arr[start - 1] + 1;
	if (start == end)
	{
		write(1, arr, end);
		if (arr[0] != 10 - end + '0')
		{
			write(1, &", ", 2);
		}
	}
	else if (start < end)
	{
		while (num <= '9')
		{
			arr[start] = num;
			result(arr, start + 1, end);
			num++;
		}
	}
}

void	ft_print_comb(int n)
{
	char	arr[10];
	int		i;

	i = 0;
	while (i <= 10 - n)
	{
		arr[0] = '0' + i;
		result(arr, 1, n);
		i++;
	}
}
