/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 16:09:03 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/18 16:41:47 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s);
		i++;
	}
}

// void	ft_toupper(unsigned int n, char *c)
// {
// 	if (c[n] >= 'a' && c[n] <= 'z')
// 	{
// 		c[n] = c[n] - 32;
// 	}
// }

// #include <stdio.h>

// int main (void)
// {
// 	char test[20] = "abcdddr124efgh";
// 	ft_striteri(test, ft_toupper);
// 	printf("%s",test);
// }
