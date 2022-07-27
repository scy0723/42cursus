/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maccodud <maccodud@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:43:29 by chashin           #+#    #+#             */
/*   Updated: 2022/07/19 18:28:08 by maccodud         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*tmp;
	unsigned long	i;

	i = 0;
	tmp = (char *)s;
	while (tmp[i])
		i++;
	tmp = tmp + i + 1;
	while (i > 0)
	{
		if (*tmp == (char)c)
			return (tmp);
		tmp--;
		i--;
	}
	return (0);
}

