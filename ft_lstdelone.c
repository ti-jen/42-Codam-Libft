/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:39:46 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/20 10:18:10 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
#include <stdlib.h>

// typedef struct s_list
// {
// void *content;
// struct s_list *next;
// } t_list;

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);

	free(lst);
}

// int main (void)
// {
// 	t_list *first = (t_list *)malloc(sizeof(t_list));
// 	t_list *second = (t_list *)malloc(sizeof(t_list));
// 	t_list *third = (t_list *)malloc(sizeof(t_list));

// 	third->next = NULL;
// 	third->content = "333";
// 	second->content = "222";
// 	first->content = "111";

// 	first->next = second;
// 	second->next = third;
// 	third ->next = NULL;
// 	ft_lstdelone(third);

// 	t_list* temp = first;
// 	while(temp) {
// 		printf("%s\n", (char*)temp->content);
// 		temp = temp->next;
// 	}
// }