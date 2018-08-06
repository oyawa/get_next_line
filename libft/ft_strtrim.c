/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:03:47 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/28 14:03:48 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t	begin;
	size_t	terminate;
	size_t	len;

	begin = 0;
	len = 0;
	if (s != NULL)
	{
		while (begin < ft_strlen(s) && ft_isspace(s[begin]))
			begin++;
		terminate = ft_strlen(s) - 1;
		while (terminate > begin && ft_isspace(s[terminate]))
			terminate--;
		len = terminate - begin + 1;
	}
	return (ft_strsub(s, begin, len));
}
