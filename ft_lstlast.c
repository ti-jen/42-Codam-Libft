/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:34:00 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/19 14:30:42 by tkroon           ###   ########.fr       */
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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = (*lst);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list* temp = (*lst);
	while (temp)
	{
		if (temp-> next == NULL)
		{
			return (temp);
		}
		temp = temp-> next;
	}
	return (NULL);
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

// 	ft_lstadd_front(&third, second);
// 	ft_lstadd_front(&second, first);

// 	t_list *last = ft_lstlast(first);
// 	printf("%s\n", (char*)last->content);

// }
