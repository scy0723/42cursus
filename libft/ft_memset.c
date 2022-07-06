/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:43:54 by chashin           #+#    #+#             */
/*   Updated: 2022/07/06 15:29:27 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *b, int c, unsigned int len)
{
	char	*tmp;
	char	*bb;

	bb = (char *)b;
	tmp = bb;
	while (len--)
	{
		*bb = (unsigned char)c;
		bb++;
	}
	return (tmp);
}
