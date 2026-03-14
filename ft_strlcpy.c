/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:41:33 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/13 16:45:55 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (i >= size)
	{
		dst [i - 1] = '\0';
	}
	else
		dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// # include <stdio.h>
// int main(void)
// {
// char s1[50] = "cop!";
// char s2[100];
// char s3[100];
// char s4[100];
// int size = 5;
// size_t len = strlcpy(s2, s1, size);
// size_t len2 = ft_strlcpy(s3, s1, size);

// printf("%s\n", s2);
// printf("lenght = %zu\n\n", len);
// printf("%s\n", s3);
// printf("lenght = %zu", len2);
// }