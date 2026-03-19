/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:16:07 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/19 14:36:05 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = (*lst);
}

int ft_lstsize(t_list *lst)
{
	int i;
	i = 0;
	t_list* temp = (*lst);
	while(temp)
	{
	 temp = temp->next;
		i++;
	}

	return (i);
}

int main (void)
{
	t_list *first = (t_list *)malloc(sizeof(t_list));
	t_list *second = (t_list *)malloc(sizeof(t_list));
	t_list *third = (t_list *)malloc(sizeof(t_list));

	third->next = NULL;
	third->content = "333";
	second->content = "222";
	first->content = "111";

	ft_lstadd_front(&third, second);
	ft_lstadd_front(&second, first);

	printf("%i", ft_lstsize(first));
}