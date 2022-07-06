/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:17:47 by chashin           #+#    #+#             */
/*   Updated: 2022/07/06 15:39:01 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s)
{
	char	*res;
	int		i;

	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}

void	*ft_memmove(void *restrict dst, const void *restrict src,
unsigned int n)
{
	void	*ret;
	int		i;
	char	*dest;
	char	*sorc;

	ret = ft_strcpy(dst);
	dest = (char *)dst;
	sorc = (char *)ft_strcpy(src);
	i = 0;
	while (n--)
	{
		dest[i] = sorc[i];
		i++;
	}
	return (ret);
}
