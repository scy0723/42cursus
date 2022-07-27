/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maccodud <maccodud@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:17:47 by chashin           #+#    #+#             */
/*   Updated: 2022/07/19 18:14:35 by maccodud         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*dtmp;
	unsigned char	*stmp;

	i = 0;
	if(dst == src || n == 0)
		return (dst);
	dtmp = (unsigned char *)dst;
	stmp = (unsigned char *)src;
	if(dst < src)
	{
		while (n--)
		{
			dtmp[i] = stmp[i];
			i++;
		}
	}
	else
	{
		while(++i <= n)
			dtmp[n - i] = stmp[n - i];	
	}
	return (dst);
}
