/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:55:30 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/28 13:55:31 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t m;

	m = 0;
	while (m < n)
	{
		*(unsigned char*)(dst + m) = *(unsigned char*)(src + m);
		if (*(unsigned char*)(src + m) == (unsigned char)c)
			return (dst + m + 1);
		m++;
	}
	return (NULL);
}
