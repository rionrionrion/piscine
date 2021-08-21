/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyamagu <akyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 21:50:20 by akyamagu          #+#    #+#             */
/*   Updated: 2021/03/10 23:32:16 by akyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
#define BSQ_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		ft_put_maperror(void);
int		ft_put_error(void);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *c);
void	to_strmap(char *buff, int n, int col, char emp, char obs);
void	temp_map(char *strmap, char *buff, int col, char emp, char obs);
int		map_len(char *buff);
char	*check_diff(char *strmap, int i, int col);
void	find_max(char *strmap, char *buff, int col, int d_row);
void	max_sq(char *strmap, int j, int max, char *buff, int col, int d_row);
char	to_print(char *strmap, char *buff, int col, int d_row);

#endif
