/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:49:22 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/13 17:04:31 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include <stddef.h>

void	*ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
	return (s);
}

// int main()
// {
// 	char str[50] = "super long tekst to test if the text is dif";
// 	char str2[50] = "super long tekst to test if the text is dif";
// 	printf("\nBefore memset(): %s\n", str);
// 	printf("\nBefore ft_memset(): %s\n", str2);

// 	bzero(str + 5, 4);
// 	ft_bzero(str2 + 5 , 4);

// 	printf("\nAfter memset():  %s", str + 10);
// 	printf("\nAfter ft_memset():  %s", str2 + 10);
// 	return 0;
// }