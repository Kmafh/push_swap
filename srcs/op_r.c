/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kama <kama@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 09:51:15 by kama              #+#    #+#             */
/*   Updated: 2023/03/17 05:59:19 by kama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** This file has the operations regarding rotation-swaps;
** 'ra' 'rb' 'rra' 'rrb'
*/
t_stk	*rr_swap(t_stk *top, t_stk *tmp)
{
	while (top->nxt)
		top = top->nxt;
	tmp->num = top->num;
	tmp->nxt = NULL;
	tmp->prv = NULL;
	return (tmp);
}

void	rr_bottom(t_stk **top)
{
	while ((*top))
	{
		if ((*top)->nxt->nxt == NULL)
			break ;
		*top = (*top)->nxt;
	}
	free((*top)->nxt);
	(*top)->nxt = NULL;
}

void	rr_stk(t_stk **top, t_stk *tmp)
{
	t_stk	*a;

	a = NULL;
	tmp = NULL;
	if (*top)
	{
		tmp = (t_stk *)malloc(sizeof(t_stk));
		if (tmp == NULL)
			return ;
		tmp = rr_swap(*top, tmp);
		a = *top;
		rr_bottom(top);
		*top = a;
		add_front(top, tmp);
	}
}

void	r_stk(t_stk **top)
{
	if (*top)
	{
		*top = (*top)->nxt;
		add_back_r(top);
	}
}
