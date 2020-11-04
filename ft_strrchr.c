/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-j <mramos-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 13:32:39 by mramos-j          #+#    #+#             */
/*   Updated: 2019/11/27 08:13:48 by mramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = (char*)s + ft_strlen(s);
	while (aux != s && *aux != (char)c)
		aux--;
	return ((*aux != (char)c) ? NULL : aux);
}
