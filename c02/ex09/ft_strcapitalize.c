/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rmanabe <rmanabe@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:57:16 by Rmanabe           #+#    #+#             */
/*   Updated: 2021/03/02 13:55:15 by Rmanabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_divided(char c, int flag)
{
	if ((flag == 1) && (c >= 97 && c <= 122))
	{
		c -= 32;
		return (c);
	}
	else if ((flag != 1) && (c >= 65 && c <= 90))
	{
		c += 32;
		return (c);
	}
	else
	{
		return (c);
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122)
			|| (str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 48 && str[i] <= 57))
		{
			str[i] = ft_divided(str[i], flag);
			i++;
			flag = 0;
		}
		else
		{
			i++;
			flag = 1;
		}
	}
	return (str);
}
