/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:36:34 by chashin           #+#    #+#             */
/*   Updated: 2022/07/06 18:54:50 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const char *str)
{
	long long	i;
	int			sign;
	
	sign = 1;
	i = 0;
	while (*str == "\f" || *str == "\n" || *str == "\t" || *str == "\r"
		|| *str == "\v" || *str == " ")
		str++;
	if (*str == "+" || *str == '-')
	{
		if (*str == "-")
			sign == -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return ((int)(i * sign));
}