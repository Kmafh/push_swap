/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kama <kama@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 09:51:15 by kama              #+#    #+#             */
/*   Updated: 2023/03/17 05:58:44 by kama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stk	*fill_list(t_var *v, char **split, t_stk *tmp)
{
	int		i;

	i = -1;
	while (split[++i])
	{
		tmp = malloc(sizeof(t_stk));
		if (tmp == NULL)
			return (NULL);
		tmp->num = ps_atoll(split[i]);
		if (tmp->num > 2147483647 || tmp->num < -2147483648)
			ft_exit_ps("ERROR - int overflow.\n", 1);
		tmp->nxt = NULL;
		tmp->prv = NULL;
		add_back(&v->a, tmp);
		tmp = NULL;
	}
	return (v->a);
}
