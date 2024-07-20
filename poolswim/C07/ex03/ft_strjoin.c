/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:10:30 by mlee              #+#    #+#             */
/*   Updated: 2024/07/13 16:12:50 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*str_cat(char *str1, char *str2)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str1[len] != '\0')
		len++;
	while (str2[i] != '\0')
		str1[len++] = str2[i++];
	str1[len] = '\0';
	return (str1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = 0;
	while (i < size)
		len += str_len(strs[i++]);
	if (size > 0)
		len += (size - 1) * str_len(sep);
	result = (char *)malloc(sizeof(char) * (len + 1));
	result[0] = '\0';
	if (result == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		result = str_cat(result, strs[i]);
		if (i < size - 1)
			result = str_cat(result, sep);
		i++;
	}
	result[len] = '\0';
	return (result);
}
