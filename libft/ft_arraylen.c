/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kama <kama@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:51:15 by anherrer          #+#    #+#             */
/*   Updated: 2023/03/17 05:56:27 by kama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arraylen(char **str)
{
	int		i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}
