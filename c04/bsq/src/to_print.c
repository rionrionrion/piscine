/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyamagu <akyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:49:30 by akyamagu          #+#    #+#             */
/*   Updated: 2021/03/10 23:29:54 by akyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

char		to_print(char *strmap, char *buff, int col, int d_row)
{
	int i;
	int j;
	char emp;
	char obs;
	char ful;
	char *pr_map;

	d_row = buff[0] - '0';
	emp = buff[1];
	obs = buff[2];
	ful = buff[3];
	col = (map_len(buff) / d_row);
	pr_map = 0;
	i = 0;
	while (strmap[i] != '\0')
	{
		if (strmap[i] == '0')
			strmap[i] = obs;
		if (!(strmap[i] == '0' || strmap[i] == ful))
			strmap[i] = emp;
		i++;
	}
	i = 0;
	j = 0;
	while (strmap[i] != '\0')
	{
		if (i % col == col - '1')	
			strmap[i + 1] = '\n';
		pr_map[j] = strmap[i];
		i++;
		j++;
	}
	pr_map[j] = '\0';
	return (*strmap);
	
}