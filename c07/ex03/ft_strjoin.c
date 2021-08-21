/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manabe <manabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:13:11 by manabe            #+#    #+#             */
/*   Updated: 2021/03/12 01:32:53 by manabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		strs_count;
	char	*p;

	if (size == 0)
	{
		p = (char *)malloc(1);
		*p = '\0';
		return (p);
	}
	i = -1;
	strs_count = 0;
	while (++i < size)
	{
		strs_count += ft_strlen(strs[i]);
	}
	p = (char *)malloc(ft_strlen(sep) * (size - 1) + strs_count + 1);
	i = -1;
	while (++i < size)
	{
		p = ft_strcat(p, strs[i]);
		if (i < size - 1)
			p = ft_strcat(p, sep);
	}
	return (p);
}
