/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:02:29 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/28 14:02:31 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*temp;

	if (!(temp = (char*)malloc(sizeof(*temp) * (size + 1))))
		return (NULL);
	temp = (char*)ft_memset(temp, 0, size + 1);
	return (temp);
}
