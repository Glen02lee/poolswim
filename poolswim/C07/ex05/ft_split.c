/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:20:27 by mlee              #+#    #+#             */
/*   Updated: 2024/07/13 16:23:51 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sep(char c, char *sep)
{
	while (*sep != '\0')
	{
		if (*sep == c)
			return (1);
		sep++;
	}
	return (0);
}

char	*ft_str_dup(char *str, char *charset)
{
	char	*new_str;
	int		len;
	int		i;

	len = 0;
	while (str[len] != '\0' && !sep(str[len], charset))
		len++;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (new_str == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int	count(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str != '\0')
	{
		if (!sep(*str, charset))
		{
			cnt++;
			while (!sep(*str, charset) && *str != '\0')
				str++;
		}
		else
			str++;
	}
	return (cnt);
}

char	**ft_split(char *str, char *charset)
{
	int		num;
	int		i;
	char	**result;

	num = count(str, charset);
	result = (char **)malloc(sizeof(char *) * (num + 1));
	if (result == 0)
		return (0);
	i = 0;
	while (*str != '\0')
	{
		if (!sep(*str, charset))
		{
			result[i++] = ft_str_dup(str, charset);
			while (!sep(*str, charset) && *str != '\0')
				str++;
		}
		else
			str++;
	}
	result[i] = 0;
	return (result);
}
