/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:30:55 by fdi-sant          #+#    #+#             */
/*   Updated: 2022/10/27 12:27:44 by fdi-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n)
	{	
		if (s1[i] == '\0' && s2[i] != '\0')
			return (-1);
		if (s2[i] == '\0' && s1[i] != '\0')
			return (1);
		if (s1[i] != s2[i])
			return ((char)s1[i] - (char)s2[i]);
		i++;
		n--;
	}
	return (0);
}
//Works also by using ft_memcmp
