/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-j <mramos-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 14:54:19 by mramos-j          #+#    #+#             */
/*   Updated: 2019/11/28 08:56:53 by mramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newrdo;
	t_list	*temp;
	t_list	*begin;

	if (lst)
	{
		temp = lst;
		if (!(begin = ft_lstnew(f(temp->content))))
			return (NULL);
		temp = temp->next;
		while (temp)
		{
			if (!(newrdo = ft_lstnew(f(temp->content))))
			{
				ft_lstclear(&begin, del);
				return (NULL);
			}
			ft_lstadd_back(&begin, newrdo);
			temp = temp->next;
		}
		return (begin);
	}
	return (NULL);
}
