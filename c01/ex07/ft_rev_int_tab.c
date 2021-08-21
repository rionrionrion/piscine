/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rmanabe <rmanabe@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 00:09:11 by Rmanabe           #+#    #+#             */
/*   Updated: 2021/02/27 00:30:17 by Rmanabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int *tmp1;
	int *tmp2;
	int i;
	int j;

	i = 0;
	j = size - 1;
	while (j >= i)
	{
		while (i <= size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp2 = &tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = *tmp2;
				i++;
			}
		}
		tmp1[i - 1] = tab[j];
		i = 0;
		j--;
	}
	tab = tmp1;
}
