/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:57:30 by chashin           #+#    #+#             */
/*   Updated: 2022/07/07 16:51:04 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *ss, int c, int n)
{
	unsigned char	*loc;
	int				i;
	unsigned char	*s;

	s = (unsigned char *)ss;
	i = 0;
	while (n-- && s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		loc = i;
	else
		return (0);
}
