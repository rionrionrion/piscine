/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rmanabe <rmanabe@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 15:57:52 by Rmanabe           #+#    #+#             */
/*   Updated: 2021/03/06 17:12:11 by Rmanabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 0;
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (i < power - 1)
		{
			result *= nb;
			i++;
		}
	}
	return (result);
}
