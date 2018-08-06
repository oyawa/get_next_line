/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:01:21 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/28 14:01:22 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newer;
	unsigned int	v;

	if (!s)
		return (NULL);
	v = 0;
	if (!(newer = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[v])
	{
		newer[v] = (*f)(v, s[v]);
		v++;
	}
	newer[v] = '\0';
	return (newer);
}
