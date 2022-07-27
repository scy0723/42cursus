/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maccodud <maccodud@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:02:48 by chashin           #+#    #+#             */
/*   Updated: 2022/07/19 18:32:05 by maccodud         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<stdlib.h>
# include<stddef.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *s, unsigned int n);
int				ft_strlen(const char *str);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(char c);
int				ft_isalpha(char c);
int				ft_isascii(char c);
int				ft_isdigit(char c);
int				ft_isprint(char c);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, unsigned int n);
void			*ft_memset(void *b, int c, unsigned int len);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize);
int				ft_strlcpy(char *restrict dst, const char *src, size_t dstsize);
char			*ft_strnstr(const char *haystack, const char *needle, int len);
char			*ft_strrchr(const char *s, int c);
char			*ft_substr(char const *s, unsigned int start, int len);
int				ft_tolower(int c);
int				ft_toupper(int c);


#endif