/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rmanabe <rmanabe@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:58:04 by Rmanabe           #+#    #+#             */
/*   Updated: 2021/03/02 15:40:05 by Rmanabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size == 0)
		return (0);
	else
	{
		while (size - 1 > i)
		{
			dest[i] = src[i];
			i++;
			return (*dest);
		}
		dest[i] = '\0';
		return (0);
	}
}
