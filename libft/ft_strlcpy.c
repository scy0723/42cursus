/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:25:44 by chashin           #+#    #+#             */
/*   Updated: 2022/07/06 15:28:49 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	strlcpy(char *restrict dst, const char *restrict src, unsigned int dstsize)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		++i;
	return (i);
}


