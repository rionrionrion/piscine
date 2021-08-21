/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rmanabe <rmanabe@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:16:03 by Rmanabe           #+#    #+#             */
/*   Updated: 2021/02/26 14:45:02 by Rmanabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
** int	main(void)
** {
**	int *a,*b;
**	int c,d;
**
**	a = &c;
**	b = &d;
**	*a = 10;
**	*b = 1;
**
**	ft_ultimate_div_mod();
**	printf("%d,%d", *a,*b);
**	return 0;
** }
*/
