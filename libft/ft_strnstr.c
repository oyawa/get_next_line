/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:02:39 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/28 14:02:42 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t taille;

	if (*little == '\0')
		return ((char *)big);
	taille = ft_strlen(little);
	while (*big != '\0' && len-- >= taille)
	{
		if (*big == *little && ft_memcmp(big, little, taille) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
