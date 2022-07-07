/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:32:58 by chashin           #+#    #+#             */
/*   Updated: 2022/07/07 17:05:21 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}

void	*ft_memcpy(void *dst, const void *src, int n)
{
	unsigned char	*dest;
	unsigned char	*sorc;
	void			*ret;
	int				i;

	ret = ft_strcpy(ret, dst);
	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	i = 0;
	while (n--)
	{
		dest[i] = sorc[i];
		i++;
	}
	return (ret);
}
