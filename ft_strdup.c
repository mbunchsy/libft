/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-j <mramos-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 23:53:21 by mramos-j          #+#    #+#             */
/*   Updated: 2019/11/26 13:27:22 by mramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*dst;

	dst = malloc(ft_strlen(s1) + 1);
	if (dst == 0)
		return (0);
	return ((char *)ft_memcpy(dst, s1, (ft_strlen(s1) + 1)));
}
