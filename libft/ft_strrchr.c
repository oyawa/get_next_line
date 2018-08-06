/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:02:51 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/28 14:02:53 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			x;
	const char	*r;

	x = 0;
	r = NULL;
	while (s[x])
	{
		if (s[x] == c)
			r = s + x;
		x++;
	}
	if (s[x] == c)
		return ((char*)(s + x));
	return ((char*)r);
}
