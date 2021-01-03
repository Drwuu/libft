/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drwuu <drwuu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 00:51:53 by drwuu             #+#    #+#             */
/*   Updated: 2020/12/23 01:04:46 by drwuu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list     *ft_lstnew(void *content)
{
    t_list  *new_elem;

    if (!(new_elem = malloc(sizeof(*new_elem))))
        return (NULL);
    new_elem->content = content;
    new_elem->next = NULL;
    return (new_elem);
}