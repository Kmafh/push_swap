/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   BBy: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:51:15 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 09:51:57 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_addstr(char ***arr, char *str)
{
	char		**tmp;
	int			len;
	int			i;

	len = ft_arraylen(*arr);
	tmp = malloc(sizeof(char *) * (len + 2));
	tmp[len + 1] = NULL;
	tmp[len] = str;
	i = -1;
	while (*(*arr + ++i))
		tmp[i] = *(*arr + i);
	free(*arr);
	*arr = tmp;
}
