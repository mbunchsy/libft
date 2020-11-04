/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-j <mramos-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 10:13:45 by mramos-j          #+#    #+#             */
/*   Updated: 2019/11/28 09:13:43 by mramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lstlen;

	lstlen = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		lstlen++;
	}
	return (lstlen);
}
