/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kama <kama@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:51:15 by anherrer          #+#    #+#             */
/*   Updated: 2023/03/17 05:54:23 by kama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getnbr(char const *str)
{
	int		nbr;
	int		neg;

	nbr = 0;
	neg = 0;
	if (*str == '-')
	{
		str++;
		neg++;
	}
	while (*str)
	{
		nbr *= 10;
		nbr = (*str - 48) + nbr;
		str++;
	}
	if (neg)
		nbr *= -1;
	return (nbr);
}
