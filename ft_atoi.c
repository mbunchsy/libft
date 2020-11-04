/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-j <mramos-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:37:02 by mramos-j          #+#    #+#             */
/*   Updated: 2019/11/27 08:59:47 by mramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long int	num;
	int						sign;
	int						i;

	sign = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\v') ||
	(str[i] == '\f') || (str[i] == '\r') || (str[i] == '\n'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	num = 0;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		if (num < 9223372036854775807)
			num = num * 10 + str[i++] - 48;
		else
			return (sign == 1 ? -1 : 0);
	}
	return (sign * num);
}
