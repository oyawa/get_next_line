/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:01:11 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/28 14:01:13 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newer;
	int		v;

	if (!s)
		return (NULL);
	if (!(newer = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	v = 0;
	while (*s)
	{
		newer[v++] = (*f)(*s);
		s++;
	}
	newer[v] = '\0';
	return (newer);
}
