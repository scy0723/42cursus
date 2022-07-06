/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:32:58 by chashin           #+#    #+#             */
/*   Updated: 2022/07/06 15:14:19 by chashin          ###   ########seoul.kr  */
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

void	*ft_memcpy(void *restrict dst, const void *restrict src, int n)
{
	void	*ret;
	int		i;
	char	*dest;
	char	*sorc;

	ret = ft_strcpy(dst);
	dest = (char *)dst;
	sorc = (char *)src;
	i = 0;
	while (n--)
	{
		dest[i] = sorc[i];
		i++;
	}
	return (ret);
}