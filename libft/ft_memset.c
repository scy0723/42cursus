/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:43:54 by chashin           #+#    #+#             */
/*   Updated: 2022/07/06 17:21:28 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *b, int c, unsigned int len)
{
	char	*tmp;
	char	*bb;

	bb = (unsigned char *)b;
	tmp = bb;
	while (len--)
	{
		*bb = (unsigned char)c;
		bb++;
	}
	return (tmp);
}
