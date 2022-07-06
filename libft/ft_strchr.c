/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:46:31 by chashin           #+#    #+#             */
/*   Updated: 2022/07/06 15:57:26 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	char	*loc;
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		loc = i;
}

