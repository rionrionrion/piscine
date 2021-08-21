/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyamagu <akyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:34:44 by manabe            #+#    #+#             */
/*   Updated: 2021/03/10 23:20:57 by akyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

char	*check_diff(char *strmap, int i, int col)
{
	int n1;
	int n2;
	int n3;
	int min;
	
	n1 = 0;
	n2 = 0;
	n3 = 0;
	min = 0;
	n1 = strmap[i - col - 1];
	min = n1;
	n2 = strmap[i - col];
	n3 = strmap[i -1];
	if (n2 < min) 
		min = n2;
	if (n3 < min) 
		min = n3;
	strmap[i] = min + 1;
	return (&strmap[i]);
}

void	temp_map(char *strmap, char *buff, int col, char emp, char obs)
{
	int 	i;
	int 	d_row;

	d_row = buff[0] - '0';
	emp = buff[1];
	obs = buff[2];
	col = (map_len(buff) / d_row); 
	i = 0;
	while (i < col)  
	{
		if (strmap[i] == obs)
			strmap[i] = '0';
		else
			strmap[i] = '1';
		i++;
	}
	if (i >= col)
	{
		while (strmap[i] != '\0')
		{	
			if (i % col == 0 && strmap[i] != obs)
				strmap[i] = '1';
			if (strmap[i] == obs)
				strmap[i] = '0';
			else
			{
			strmap[i] = *check_diff(strmap, i, col);
			}
			i++;
		}
	}	
	find_max(strmap, buff, col, d_row);
}
