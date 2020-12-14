/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:38:57 by lwourms           #+#    #+#             */
/*   Updated: 2020/12/14 18:43:36 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		findstrlen(char const *s, char c, int i)
{
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int		countstr(char const *s, char c)
{
	int	i;
	int	j;
	int	new_word;

	i = 0;
	j = 0;
	new_word = 1;
	while (s[i])
	{
		if (s[i] == c)
			new_word = 1;
		if (s[i] != c && new_word)
		{
			j++;
			new_word = 0;
		}
		i++;
	}
	return (j);
}

char	*buildstr(char const *s, char c, int i)
{
	char	*str;
	int		j;

	j = 0;
	if (!(str = malloc(sizeof(*str) * (findstrlen(s, c, i) + 1))))
		return (NULL);
	while (s[i] && s[i] != c)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**finalstr;
	int		i;
	int		j;
	int		new_word;

	if (!(s && c 	\
			&& (finalstr = malloc(sizeof(*finalstr) * (countstr(s, c) + 1)))))
		return (NULL);
	i = 0;
	j = 0;
	new_word = 1;
	while (s[i])
	{
		if (s[i] == c)
			new_word = 1;
		if (s[i] != c && new_word)
		{
			if (!(finalstr[j++] = buildstr(s, c, i)))
				return (NULL);
			new_word = 0;
		}
		i++;
	}
	finalstr[j] = NULL;
	return (finalstr);
}
