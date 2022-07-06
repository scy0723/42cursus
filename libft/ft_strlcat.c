/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:34:20 by chashin           #+#    #+#             */
/*   Updated: 2022/07/06 17:49:00 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	_src;
	unsigned int	_dest;
	unsigned int	i;

	i = 0;
	_dest = ft_strlen(dst);
	_src = ft_strlen(src);
	if (dstsize <= _dest)
		_src += dstsize;
	else
		_src += _dest;
	while (src[i] && _dest + 1 < dstsize)
	{
		dst[_dest++] = src[i++];
	}
	dst[_dest] = '\0';
	return (_src);
}
