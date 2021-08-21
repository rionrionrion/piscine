/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rmanabe <rmanabe@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 01:28:04 by Rmanabe           #+#    #+#             */
/*   Updated: 2021/03/03 21:50:37 by Rmanabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	dest_size(char *dest)
{
	unsigned int cnt;

	cnt = 0;
	while (dest[cnt] != '\0')
		cnt++;
	return (cnt);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = dest_size(dest);
	j = 0;
	if (i + 1 > size)
	{
		return (dest_size(src) + size);
	}
	while (src[j] != '\0' && j < size - i - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	if (i >= size)
		return (dest_size(src) + size);
	else
		return (i + dest_size(src));
}
