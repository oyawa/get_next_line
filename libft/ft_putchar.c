/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:56:28 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/28 13:56:29 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	int uni[2];

	ft_memcpy(uni, "\u00F8", 2);
	if (ft_isascii(c))
		write(1, &c, 1);
	else
	{
		uni[1] = c;
		write(1, &uni, 2);
	}
}
