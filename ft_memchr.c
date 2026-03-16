/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:10:31 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/14 13:43:22 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	return (NULL);
}

// int main (void)
// {
// 	char* str = "ABCHDEFGHIJKL";
// 	int c = 'G';
// 	int l = 20;
// 	char *res = memchr(str, c, l);
// 	char *res2 = ft_memchr(str, c, l);

// 	printf("%s\n", res);
// 	printf("%s\n", res2);

// }