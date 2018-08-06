/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:54:59 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/28 13:55:00 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t v;

	v = 0;
	while (v < n)
	{
		if (*(unsigned char*)(s + v) == (unsigned char)c)
			return ((void*)(s + v));
		v++;
	}
	return (NULL);
}
