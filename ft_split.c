/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:48:52 by fdi-sant          #+#    #+#             */
/*   Updated: 2022/11/05 10:43:36 by fdi-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
			{
				i++;
			}
		}
		else
			i++;
	}
	return (count);
}

static int	ft_substrlen(const char *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	k;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0' && k < count)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			result[k++] = ft_substr(s, i, ft_substrlen(s, c, i));
			i = ft_substrlen(s, c, i) + i;
		}
	}
	result[k] = 0;
	return (result);
}
/*
#include "stdio.h"

int	main()
{
	char c;
	char	*s;

	s = " ";
	c = 'n';
	//printf("%lu", ft_count(s, c));	
	printf("%lu", ft_substrlen(s, c));
	return (0);
}
*/
/*
char  *ft_substr(char const *s, unsigned int start, size_t len)
{
        size_t  i;
        size_t  j;
        char    *str;

        str = (char *)malloc(sizeof(*s) * (len + 1));
        if (!str)
                return (NULL);
        i = 0;
        j = 0;
        while (s[i])
        {
                if (i >= start && j < len)
                {
                        str[j] = s[i];
                        j++;
                }
                i++;
        }
        str[j] = 0;
        return (str);
}
*/
