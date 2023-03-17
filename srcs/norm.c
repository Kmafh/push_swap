/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kama <kama@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 09:51:15 by kama              #+#    #+#             */
/*   Updated: 2023/03/17 05:59:01 by kama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** As the short sort, theses functions were set to better choose how to
** rotate the stack 'a' and 'b';
*/
void	normalize_a(t_stk **a, t_stk **b, t_var *v, int pvt)
{
	int	idx;
	int	num;

	idx = get_idx((*a), pvt, 1);
	num = (list_size((*a)) / 2);
	if (idx < num)
		pick_case(a, b, RA, v);
	else
		pick_case(a, b, RRA, v);
}

void	normalize_b(t_stk **a, t_stk **b, t_var *v, int pvt)
{
	int	idx;
	int	num;

	idx = get_idx((*b), pvt, 2);
	num = ft_abs((list_size((*b)) / 2));
	if (idx < num && *b)
		pick_case(a, b, RB, v);
	else if (*b)
		pick_case(a, b, RRB, v);
}
