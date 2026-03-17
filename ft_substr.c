/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:04:32 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/17 11:49:40 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	size_t	i;
	char	*res;

	i = 0;
	l = 0;
	while (l <= len && s[start + l] != '\0')
	{
		l++;
	}
	res = malloc(l * 4);
	if (res == NULL)
		return (NULL);
	while (i < l - 1)
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}

// #include <stdio.h>
// int main (void)
// {
// 	char string[] = "\0";

// 	printf("%s",ft_substr(string, 1 , 5));

// }