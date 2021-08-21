/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rmanabe <rmanabe@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 01:21:57 by Rmanabe           #+#    #+#             */
/*   Updated: 2021/02/25 14:54:39 by Rmanabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_num(int n)
{
	char i;
	char j;

	i = '0' + n / 10;
	j = '0' + n % 10;
	write(1, &i, 1);
	write(1, &j, 1);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 98)
	{
		y = 0;
		while (y <= 99)
		{
			if (x < y)
			{
				ft_put_num(x);
				write(1, " ", 1);
				ft_put_num(y);
				if (!(x == 98 && y == 99))
				{
					write(1, ", ", 2);
				}
			}
			y++;
		}
		x++;
	}
}

/*
** int main(void)
** {
** 	ft_print_comb2();
** 	return(0);
** }
*/
