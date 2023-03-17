/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:51:15 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 09:51:57 by anherrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_addchar(char *str, char c)
{
	char		*res;
	int			len;
	int			i;

	i = -1;
	len = ft_strlen(str);
	res = ft_calloc(len + 2, sizeof(char));
	while (++i < len)
		res[i] = str[i];
	res[i] = c;
	free(str);
	return (res);
}
