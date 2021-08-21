/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyamagu <akyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:32:54 by akyamagu          #+#    #+#             */
/*   Updated: 2021/03/10 23:28:54 by akyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

int		map_len(char *buff)
{
	int i;
	int n;
	
	i = 5;
	n = 0;
	while (buff[i])
	{
		if (buff[i] == buff[1] || buff[i] == buff[2])
			n++;
		i++;
	}
	return (n);
}

int		ft_rows_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
    if (n > 0)
	    return (n);
    else
        return (0);
}

void	ft_file_read(char *argv)
{
	int		fd;
	int		filesize;
	char	buff[128]; 
	int		d_row;
	int		col;
	char	obs;
	char	emp;
	char	ful;
	int		i;

	d_row = buff[0] - '0';
	emp = buff[1];
	obs = buff[2];
	ful = buff[3];
	i = 0;
	col = (map_len(buff) / d_row); 
	fd = open(argv, O_RDONLY);
	if (!fd)
		ft_put_maperror();
	filesize = read(fd, buff, 1000);
	if (!filesize)
		ft_put_maperror();
	
	d_row = buff[0] - '0';
	emp = buff[1];
	obs = buff[2];
	col = (map_len(buff) / d_row); 
	to_strmap(buff, map_len(buff), col, emp, obs);
	close(fd);
}

int		main(int argc, char **argv)
{
	int i;
	
	if (argc <= 1)
		ft_put_error();
	else
	{
		i = 1;
		while (argv[i])
		{
			ft_file_read(argv[i]);
			i++;
		}
	}
	return (0);
}
