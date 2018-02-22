/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarchys <ymarchys@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:30:00 by ymarchys          #+#    #+#             */
/*   Updated: 2018/02/20 13:30:00 by ymarchys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void				long_format(char **files, int n, t_ls *ls)
{
	int			i;
	int			w1;
	int			w2;

	i = 0;
	w1 = lf_length_1(files, n);
	w2 = lf_length_2(files, n);
	ft_printf("total %lld\n", ls_total(files, n, ls));
	while (i < n)
	{
		if (print_dot(files[i], ls))
			print_long_format(files[i], w1, w2);
		i++;
	}
}