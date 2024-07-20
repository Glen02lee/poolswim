/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:27:56 by mlee              #+#    #+#             */
/*   Updated: 2024/07/03 13:52:59 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	flaging(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	else if (c >= '0' && c <= '9')
		return (3);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (flag == 1)
		{
			flag = 0;
			if (flaging(str[i]) == 0)
				flag = 1;
			else if (flaging(str[i]) == 1)
				str[i] -= 32;
		}
		else
		{
			if (flaging(str[i]) == 0)
				flag = 1;
			else if (flaging(str[i]) == 2)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
