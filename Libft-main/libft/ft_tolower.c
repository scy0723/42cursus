/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:51:38 by chashin           #+#    #+#             */
/*   Updated: 2022/08/07 15:51:39 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_tolower(int c)
{
	return (c + 32 * (c >= 'A' && c <= 'Z'));
}
