/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 16:09:03 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/23 13:54:56 by tkroon           ###   ########.fr       */
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
		f(i, &s[i]);
		i++;
	}
}

// void
// iter(unsigned int i, char * s) {
// 	*s += i;
// }

// #include <stdio.h>

// int main (void)
// {
// 	char s[] = "0000000000";
// 	ft_striteri(s, iter);
// 	printf("%s",test);
// }
