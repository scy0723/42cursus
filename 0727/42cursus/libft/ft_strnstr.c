/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maccodud <maccodud@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:12:17 by chashin           #+#    #+#             */
/*   Updated: 2022/07/19 18:15:56 by maccodud         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	char	*_hay;
	char	*_needle;

	if (*needle == '\0')
		return (haystack);
	while (*haystack && (len-- - ft_strlen(needle) >= 0))
	{
		if (*haystack == *needle)
		{
			_hay = haystack;
			_needle = needle;
			while (*_needle)
			{
				_hay++;
				_needle++;
				if (*_needle == '\0')
					return (haystack);
				else if (*_needle != *_hay)
					break ;
			}
		}
		haystack++;
	}
	return (0);
}
