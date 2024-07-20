/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:30:48 by mlee              #+#    #+#             */
/*   Updated: 2024/07/06 19:32:40 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int					i;
	unsigned long long	result;

	i = 2;
	result = 1;
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	while (i <= nb)
		result *= (unsigned long long) i++;
	return (result);
}
