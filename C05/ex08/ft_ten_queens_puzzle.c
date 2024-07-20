/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:19:29 by mlee              #+#    #+#             */
/*   Updated: 2024/07/07 17:17:18 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arr(int *arr)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check(int col, int *arr)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (arr[i] == arr[col])
			return (0);
		if (arr[i] - arr[col] == i - col)
			return (0);
		if (arr[i] - arr[col] == col - i)
			return (0);
		i++;
	}
	return (1);
}

int	check_queen(int col, int *arr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (col == 10)
	{
		print_arr(arr);
		return (1);
	}
	while (i < 10)
	{
		arr[col] = i;
		if (check(col, arr))
			count += check_queen(col + 1, arr);
		i++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[10];
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < 10)
		arr[i++] = 0;
	i = 0;
	while (i < 10)
	{
		result += check_queen(1, arr);
		arr[0]++;
		i++;
	}
	return (result);
}
