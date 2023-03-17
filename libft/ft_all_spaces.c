/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_spaces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kama <kama@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:51:15 by anherrer          #+#    #+#             */
/*   Updated: 2023/03/17 05:57:40 by kama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_all_spaces(char *str)
{
	int			i;
	int			j;

	i = -1;
	j = ft_strlen(str);
	while ((++i < j) && (ft_isspace_nl(str[i]) && str[i] != '\n'))
		;
	if (i == j)
		return (1);
	else
		return (0);
}
