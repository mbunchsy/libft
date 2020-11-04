/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-j <mramos-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:27:38 by mramos-j          #+#    #+#             */
/*   Updated: 2019/11/19 10:59:27 by mramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *s;
	char *s2;

	s = (char *)dst;
	s2 = (char *)src;
	while (n--)
	{
		*s = *s2;
		if (*s2 == (char)c)
		{
			dst++;
			return (dst);
		}
		s++;
		s2++;
		dst++;
	}
	return (NULL);
}
