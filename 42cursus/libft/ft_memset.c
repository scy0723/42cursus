/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:43:54 by chashin           #+#    #+#             */
/*   Updated: 2022/07/07 16:40:12 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

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
