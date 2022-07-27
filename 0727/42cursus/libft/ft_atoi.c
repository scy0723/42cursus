/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maccodud <maccodud@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:36:34 by chashin           #+#    #+#             */
/*   Updated: 2022/07/19 18:14:10 by maccodud         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	i;
	int					sign;

	sign = 1;
	i = 0;
	while (*str && (*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return ((int)(i * sign));
}