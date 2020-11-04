/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-j <mramos-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:50 by mramos-j          #+#    #+#             */
/*   Updated: 2019/11/26 13:16:44 by mramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*arr;
	size_t	i;

	if (!(arr = malloc(count * size)))
		return (NULL);
	i = 0;
	while (i < (count * size))
		arr[i++] = 0;
	return ((void *)arr);
}
