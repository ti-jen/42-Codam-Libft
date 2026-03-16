/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:59:09 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/16 14:11:49 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		res;
	int		*array;
	size_t	i;

	i = 0;
	res = nmemb * size;
	array = malloc(res);
	while (i <= nmemb)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}

// int main (void)
// {
// 	int *array1;
// 	int *array2;
// 	int i = 0;

// 	array1 = (int*)calloc(21, 4);
// 	array2 = (int*)ft_calloc(21, 4);

// 	// 	while (i <= 21)
// 	// {
// 	// 	array1[i] = i;
// 	// 	array2[i] = i;
// 	// 	++i;
// 	// }

// 	i = 0;
// 	while (i <= 21)
// 	{
// 		printf ("arr 1=%i :%d\n", i, array1[i]);
// 		printf ("arr 2=%i :%d\n", i, array2[i]);
// 		++i;
// 	}
// }