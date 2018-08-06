/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:58:20 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/28 13:58:22 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int c;

	c = 0;
	while (*(unsigned char*)(s1 + c) || *(unsigned char*)(s2 + c))
	{
		if (*(unsigned char*)(s1 + c) != *(unsigned char*)(s2 + c))
			return (*(unsigned char*)(s1 + c) - *(unsigned char*)(s2 + c));
		c++;
	}
	return (0);
}
