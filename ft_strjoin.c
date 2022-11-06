/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:25:17 by fdi-sant          #+#    #+#             */
/*   Updated: 2022/10/29 13:35:58 by fdi-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	size_t	i;
	size_t	k;

	final = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	k = 0;
	if (!final)
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	while (s1[i] != '\0')
		final[k++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
	{
		final[i + k] = s2[i];
		i++;
	}
	final[i + k] = '\0';
	return (final);
}
