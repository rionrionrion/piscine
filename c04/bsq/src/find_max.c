/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyamagu <akyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:09:50 by manabe            #+#    #+#             */
/*   Updated: 2021/03/10 23:21:54 by akyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

void	find_max(char *strmap, char *buff, int col, int d_row)
{
	int i;
	int j;
	int max;
		
	i = 0;
	j = 0;
	d_row = buff[0] - '0';
	col = (map_len(buff) / d_row);
	max = strmap[0];
	while (strmap[i] != '\0')
	{
		if (max < strmap[i])
		{
			max = strmap[i];
			j = i;
		}
		i++;
	}
	max_sq(strmap, j, max, buff, col, d_row);
}

void	max_sq(char *strmap, int j, int max, char *buff, int col, int d_row)
{
	int max_v;
	int ful;
	
	d_row = buff[0] - '0';
	col = (map_len(buff) / d_row);
	ful = buff[3];
	max_v = max;
	while (max > '0')
	{
		while (max_v > '0' && j > 0) 
		{
			strmap[j] = ful;
			max_v--;
			j--;
		}
		j = j + max - col - '0';
		max_v = max + '1' - '0';
		max--;
	}
	to_print(strmap, buff, col, d_row);
}
