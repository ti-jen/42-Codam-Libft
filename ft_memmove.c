/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:50:11 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/16 14:04:40 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*str1;
	const char		*str2;

	str1 = dest;
	str2 = src;
	while (n > 0)
	{
		str1[n - 1] = str2[n - 1];
		n--;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main ()
// {
//    // const char src[50] = "123456789";
//    char Adest[50] = "123456789";
//    char Adest2[50] = "ABCDEFGHJ";
//    char Bdest[50] = "123456789";
//    char Bdest2[50] = "ABCDEFGHJ";
//    memmove(Adest + 8, Adest2, 10);
//    printf("After memmove dest2 =    %s\n", Adest);
//    ft_memmove(Bdest + 8, Bdest2, 10);
//    printf("After ft_memmove dest3 = %s\n", Bdest);
//    return(0);
// }