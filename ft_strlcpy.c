/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:41:33 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/25 12:35:22 by tkroon           ###   ########.fr       */
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
	if (i >= size && i != 0)
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
// char s1[100] = "lorem ipsum dolor sit amet";
// char s2[100]= "lorem ipsum dolor sit amet";
// char s3[100];
// char s4[100];
// int size = 0;
// size_t len = strlcpy(s3, s1, size);
// size_t len2 = ft_strlcpy(s4, s2, size);

// int i = 0;
// printf("%s\n", s3);
// printf("%s\n", s4);
// while (i != 30)
// {
// 	printf("%i == %i\n", s3[i], s4[i]);
// 	i++;
// }
// }