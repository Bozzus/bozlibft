/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:31:46 by fdi-sant          #+#    #+#             */
/*   Updated: 2022/11/03 12:43:30 by fdi-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	n;

	n = nmemb * size;
	if (nmemb != 0 && n / nmemb != size)
		return (NULL);
	arr = (void *)malloc(n);
	if (!arr)
		return (NULL);
	ft_bzero(arr, n);
	return (arr);
}
