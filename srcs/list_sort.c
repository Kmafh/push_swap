/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kama <kama@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 09:51:15 by kama              #+#    #+#             */
/*   Updated: 2023/03/17 05:58:17 by kama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** This funcition return the number associated with the received idx;
*/
int	ft_lstnbr(t_stk **stk, int idx)
{
	t_stk	*tmp;
	int		i;

	i = 0;
	tmp = *stk;
	while (tmp != NULL)
	{
		if (i == idx)
			return (tmp->num);
		i++;
		tmp = tmp->nxt;
	}
	return (1);
}

void	ft_lstswp(t_stk *x, t_stk *y)
{
	int	tmp;

	tmp = x->num;
	x->num = y->num;
	y->num = tmp;
}

/*
** This function will sort the list to be used as base for
** the logic and algorithm;
*/
t_stk	*ft_lstsort(t_stk *stk)
{
	t_stk	*base;
	t_stk	*tmp;
	t_stk	*cmp;

	base = NULL;
	base = stk;
	tmp = NULL;
	cmp = NULL;
	while (base->nxt)
	{
		cmp = base;
		tmp = base->nxt;
		while (tmp)
		{
			if (cmp->num > tmp->num)
				cmp = tmp;
			tmp = tmp->nxt;
		}
		ft_lstswp(base, cmp);
		base = base->nxt;
	}
	return (stk);
}
