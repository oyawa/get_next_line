/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:55:57 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/28 13:55:58 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*destination;
	unsigned char		*source;

	destination = (unsigned char*)dst;
	source = (unsigned char *)src;
	if (len <= 0)
		return (dst);
	if (source < destination)
	{
		while (len)
		{
			destination[len - 1] = source[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
