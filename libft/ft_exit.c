/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kama <kama@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:51:15 by anherrer          #+#    #+#             */
/*   Updated: 2023/03/17 05:56:18 by kama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_exit(char *arg, int err)
{
	if (err != 0)
		ft_putstr_fd(arg, 2);
	else
		ft_putstr_fd("exit\n", 1);
	exit(err);
}
