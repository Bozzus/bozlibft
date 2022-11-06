/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:22:52 by fdi-sant          #+#    #+#             */
/*   Updated: 2022/11/06 16:49:56 by fdi-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	size_t	k;

	i = (ft_strlen(s));
	k = (size_t)c;
	while (i >= 0)
	{
		if (s[i] == (char)k)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
