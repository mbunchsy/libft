/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-j <mramos-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:45:26 by mramos-j          #+#    #+#             */
/*   Updated: 2019/11/26 13:22:50 by mramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*ldest;
	char		*lsrc;
	int			i;

	d = dst;
	s = src;
	i = 0;
	if (d == s)
		return (dst);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		ldest = d + (n - 1);
		lsrc = (char*)s + (n - 1);
		while (n--)
			*ldest-- = *lsrc--;
	}
	return (dst);
}
