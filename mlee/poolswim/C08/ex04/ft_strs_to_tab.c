/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:30:26 by mlee              #+#    #+#             */
/*   Updated: 2024/07/12 14:40:52 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strndup(char *src)
{
	int		i;
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	temp;
	t_stock_str	*strs;

	strs = malloc(sizeof(t_stock_str) * (ac + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		temp.size = ft_strlen(av[i]);
		temp.str = av[i];
		temp.copy = ft_strndup(av[i]);
		if (temp.copy == NULL)
			return (NULL);
		strs[i++] = temp;
	}
	strs[ac].str = 0;
	return (strs);
}
