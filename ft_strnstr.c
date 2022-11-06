/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:47:51 by fdi-sant          #+#    #+#             */
/*   Updated: 2022/10/27 12:42:53 by fdi-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		k = 0;
		while (big[k + i] == little[k] && (i + k) < len)
		{
			if (big[k + i] == '\0' && little[k] == '\0')
				return ((char *)&big[i]);
			k++;
		}
		if (little[k] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
