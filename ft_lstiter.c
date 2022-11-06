/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:36:28 by fdi-sant          #+#    #+#             */
/*   Updated: 2022/11/05 10:19:38 by fdi-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{	
	if (!lst | !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}	
}
/*Iterates the list 'lst' and applies 
the function 'f' on the content of each node */
