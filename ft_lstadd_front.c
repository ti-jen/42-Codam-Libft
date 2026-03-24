/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:45:11 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/23 14:53:39 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

// typedef struct s_list
// {
// void 			*content;
// struct s_list	*next;
// }	t_list;

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = (*lst);
	*lst = new;
}

// int main (void)
// {
// 	t_list *first = (t_list *)malloc(sizeof(t_list));
// 	t_list *second = (t_list *)malloc(sizeof(t_list));
// 	t_list *third = (t_list *)malloc(sizeof(t_list));

// 	ft_lstadd_front(&third, second);
// 	ft_lstadd_front(&second, first);
// }