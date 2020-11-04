/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-j <mramos-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 23:58:03 by mramos-j          #+#    #+#             */
/*   Updated: 2020/02/06 01:12:47 by mramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		tam(int n)
{
	int		len;
	long	num;

	num = n;
	len = (n < 0 ? 1 : 0);
	num = n;
	while (num / 10)
	{
		num = num / 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	long	nu;
	int		len;
	int		i;

	nu = n;
	len = tam(n);
	if (!(num = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	num[len] = '\0';
	i = (nu < 0 ? 1 : 0);
	if (nu < 0)
	{
		num[0] = '-';
		nu = nu * -1;
	}
	while (len-- > i)
	{
		num[len] = (nu % 10) + 48;
		nu = (nu / 10);
	}
	return (num);
}
