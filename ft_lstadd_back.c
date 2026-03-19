/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:49:18 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/19 14:35:44 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// #include <stdio.h>
#include <stdlib.h>

// typedef struct s_list
// {
// void *content;
// struct s_list *next;
// } t_list;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = (*lst);
	while (temp-> next)
	{
		temp = temp-> next;
	}
	new->next = NULL;
	temp->next = new;
}

// int main (void)
// {
// 	t_list *first = (t_list *)malloc(sizeof(t_list));
// 	t_list *second = (t_list *)malloc(sizeof(t_list));
// 	t_list *third = (t_list *)malloc(sizeof(t_list));
// 	t_list *fourth = (t_list *)malloc(sizeof(t_list));

// 	fourth->next = NULL;
// 	fourth->content = "444";
// 	third->content = "333";
// 	second->content = "222";
// 	first->content = "111";

// 	first->next = second;
// 	second->next = third;
// 	third ->next = NULL;

// 	ft_lstadd_back(&first, fourth);

// 	t_list* temp = first;
// 	while(temp) {
// 		printf("%s\n", (char*)temp->content);
// 		temp = temp->next;
// 	}
// }