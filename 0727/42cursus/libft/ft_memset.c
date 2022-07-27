/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maccodud <maccodud@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:43:54 by chashin           #+#    #+#             */
/*   Updated: 2022/07/19 18:14:38 by maccodud         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned char	*tmp;
	unsigned char	*bb;

	bb = (unsigned char *)b;
	tmp = bb;
	while (len--)
	{
		*bb = (unsigned char)c;
		bb++;
	}
	return (tmp);
}
