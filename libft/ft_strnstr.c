/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:12:17 by chashin           #+#    #+#             */
/*   Updated: 2022/07/06 18:35:53 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*strnstr(const char *haystack, const char *needle, int len)
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
