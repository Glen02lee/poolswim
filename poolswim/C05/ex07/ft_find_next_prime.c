/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:01:01 by mlee              #+#    #+#             */
/*   Updated: 2024/07/06 20:20:47 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int num)
{
	long	i;
	long	prime;

	i = 2;
	if (num <= 1)
		return (0);
	if (num == 2)
		return (1);
	while (1)
	{
		if (num % i == 0)
			return (0);
		prime = i * i;
		if (prime > num)
			break ;
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	num;

	num = nb;
	while (1)
	{
		if (is_prime(num))
			return (num);
		num++;
	}
}
