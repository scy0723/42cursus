/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maccodud <maccodud@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:01:52 by chashin           #+#    #+#             */
/*   Updated: 2022/07/19 18:16:17 by maccodud         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*res;

	k = 0;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	len = i + j;
	res = (char *)malloc(sizeof(char) * (len + 1));
	while (i--)
	{
		res[k++] = *s1;
		s1++;
	}
	while (j--)
	{
		res[k++] = *s2;
		s2++;
	}
	res[k] = 0;
	return (res);
}
