/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:49:18 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/24 15:23:41 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>


// typedef struct s_list
// {
// void *content;
// struct s_list *next;
// } t_list;

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list    *temp;
    if (new == NULL || lst == NULL)
      return;
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    temp = (*lst);
    while (temp-> next)
    {
        temp = temp-> next;
    }
    temp->next = new;
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*l;

// 	l = (t_list *)malloc(sizeof(t_list));
// 	l->content = content;
// 	l -> next = NULL;
// 	return (l);
// }

// int main (void)
// {
// 	t_list * l =  NULL;
// 	t_list * l2 =  NULL;
// 	ft_lstadd_back(&l, ft_lstnew((void*)1));
// 	ft_lstadd_back(&l, ft_lstnew((void*)2));
// 	ft_lstadd_back(&l, ft_lstnew((void*)3));
// 	ft_lstadd_back(&l, ft_lstnew((void*)4));
// 	ft_lstadd_back(&l, l2);
// 	t_list * temp;
// 	int i = 0;
// 	while(i > 4)
// 	{
// 		temp = l->next;
// 		printf("%i",temp->content)
// 		i++;
// 	}
// }