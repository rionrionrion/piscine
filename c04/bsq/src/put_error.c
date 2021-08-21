/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyamagu <akyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:25:36 by akyamagu          #+#    #+#             */
/*   Updated: 2021/03/09 00:04:04 by akyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_put_maperror(void)
{
	write(2, "Map Error\n", 9);
	return (0);
}

int		ft_put_error(void)
{
	write(2, "Error\n", 6);
	return (0);
}
