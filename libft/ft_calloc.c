/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:57:21 by chashin           #+#    #+#             */
/*   Updated: 2022/07/06 19:02:11 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*memset(void *b, int c, unsigned int len);

void	*calloc(int count, int size)
{
	void	*res;

	res = malloc(count * size);
	if (!res)
		return (0);
	res = memset(res, 0, count * size);
	return (res);
}