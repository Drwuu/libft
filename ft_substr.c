/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:42:40 by lwourms           #+#    #+#             */
/*   Updated: 2021/01/03 16:36:16 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (0);
	if (!(str = malloc(sizeof(*str) * len + 1)))
		return (0);
	if ((size_t)start >= ft_strlen((char *)s))
	{
		str[0] = '\0';
		return ((char *)str);
	}
	i = 0;
	j = start;
	while (j < start + (unsigned int)len && s[j])
		str[i++] = s[j++];
	str[i] = '\0';
	return (str);
}
