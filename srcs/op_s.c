/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   BBy: kama <kama@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 09:51:15 by kama              #+#    #+#             */
/*   Updated: 2023/03/17 05:52:23 by kama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** This file has the functions related to the swap operations;
** 'sa' 'sb'
*/
void	s_stk(t_stk **top)
{
	int		i;
	int		j;
	t_stk	*tmp;

	tmp = NULL;
	if ((*top) && (*top)->nxt)
	{
		tmp = *top;
		i = (*top)->num;
		j = (*top)->nxt->num;
		tmp = *top;
		(*top)->num = j;
		tmp = *top;
		(*top)->nxt->num = i;
		(*top) = tmp;
	}
}
