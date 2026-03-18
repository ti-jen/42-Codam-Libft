/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:49:40 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/18 16:29:07 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	int l;
	char *res;

	i = 0;
	l = 0;


	while (s[l] != '\0')
		l++;
	res = malloc(l * 4);
	while (i < l && res != NULL)
	{
		res[i] = f(i, s[i]);
		i++;
	}

	return (res);
}

char	ft_toupper(int n, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

// int main (void)
// {
// 	char *arr;

// 	arr = ft_strmapi("abcdefg", ft_toupper);

// 	printf("%s", arr);
// }
