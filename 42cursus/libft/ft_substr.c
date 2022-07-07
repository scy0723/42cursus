/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:50:57 by chashin           #+#    #+#             */
/*   Updated: 2022/07/07 15:59:50 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, int len)
{
	unsigned char	*res;
	int				i;

	i = 0;
	res = (unsigned char *)malloc(sizeof(unsigned char *) * (len + 1));
	if (!res)
		return (0);
	while (len-- && s[start])
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = 0;
	return (res);
}
