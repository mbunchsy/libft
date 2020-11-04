/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-j <mramos-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 01:00:50 by mramos-j          #+#    #+#             */
/*   Updated: 2019/11/26 13:34:53 by mramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*s;
	char	*src;
	size_t	i;
	size_t	j;

	s = (char *)haystack;
	src = (char *)needle;
	if (*needle == 0)
		return (s);
	i = 0;
	while (s[i] && i < len)
	{
		j = 0;
		while (s[i + j] == src[j] && (i + j) < len)
		{
			if (src[j + 1] == '\0')
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
