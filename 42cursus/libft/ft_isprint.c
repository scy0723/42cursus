/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:38:02 by chashin           #+#    #+#             */
/*   Updated: 2022/07/06 13:40:39 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
