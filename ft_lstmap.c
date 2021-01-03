/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 00:51:53 by drwuu             #+#    #+#             */
/*   Updated: 2021/01/03 14:08:34 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list      *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list;
    t_list  *first_elem;
    
    if (!lst || !f || !del)
        return (NULL);
    if (!(new_list = ft_lstnew(f(lst->content))))
        return (NULL);
    first_elem = new_list;
    lst = lst->next))
        return (first_elem);
    while (lst)
    {
        if (!(new_list = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&first_elem, del);
            return (NULL);
        }
        if (lst->next)
        {
            lst = lst->next;
            new_list->next = lst;
        }
        else
            new_list->next = NULL;
    }
    return (first_elem);
}