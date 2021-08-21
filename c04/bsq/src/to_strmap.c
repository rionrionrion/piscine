/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyamagu <akyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:25:36 by akyamagu          #+#    #+#             */
/*   Updated: 2021/03/10 23:23:05 by akyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

void	to_strmap(char *buff, int n, int col, char emp, char obs)
{
	char	*strmap;
	int 	d_row;
	int		i;
	int		j;

	d_row = buff[0] - '0';
	col = (n / d_row); 
	emp = buff[1];
	obs = buff[2];
	
	if (!(strmap = (char *)malloc(sizeof(char) * n + 1)))
		ft_put_error();
	*strmap = 0;
	i = 5;
	j = 0;
	while (buff[i] != '\0')
	{
		if (buff[i] == '\n')
			i++;
		if (buff[i] == emp || buff[i] == obs)
			strmap[j] = buff[i];
		i++;
		j++;
	}
	strmap[d_row * col] = '\0';
	temp_map(strmap, buff, col, emp, obs);
	free(strmap);
}
	