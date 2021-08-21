/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manabe <manabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:02:08 by manabe            #+#    #+#             */
/*   Updated: 2021/03/12 17:21:56 by manabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char				*ft_strdup(char *src)
{
	int		size;
	char	*p;
	int		i;

	i = 0;
	size = ft_strlen(src);
	p = (char *)malloc(sizeof(char) * (size + 1));
	if (!p)
		return (0);
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*a;
	int			i;

	i = 0;
	a = (struct s_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!a)
		return (0);
	while (i < ac)
	{
		a[i].size = ft_strlen(av[i]);
		a[i].str = av[i];
		a[i].copy = ft_strdup(av[i]);
		i++;
	}
	a[i].size = 0;
	a[i].str = 0;
	a[i].copy = 0;
	return (a);
}
