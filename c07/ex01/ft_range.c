/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manabe <manabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:22:16 by manabe            #+#    #+#             */
/*   Updated: 2021/03/12 00:17:45 by manabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;

	i = 0;
	range = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
