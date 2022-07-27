/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maccodud <maccodud@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:25:44 by chashin           #+#    #+#             */
/*   Updated: 2022/07/19 18:19:32 by maccodud         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *restrict dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t 	len;

	len = ft_strlen(src);
	if(dstsize == 0)
		return (len);
	i = 0;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	while (src[i])
		++i;
	return (i);
}
