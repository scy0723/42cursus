/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:43:29 by chashin           #+#    #+#             */
/*   Updated: 2022/07/06 18:13:06 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	char	*loc;
	int		i;
	int		flag;

	flag = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			loc = &s[i];
			flag = 1;
		}
		i++;
	}
	if (c == '\0')
	{
		loc = i;
		flag = 1;
	}
	if (flag == 1)
		return (loc);
	else
		return (0);
}
