/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:36:17 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/14 12:06:15 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				comp;
	unsigned int	i;

	i = 0;
	comp = 0;
	while (!(i == n) && (comp == 0) && !(s1[i] == '\0' && s2[i] == '\0'))
	{
		comp = s1[i] - s2[i];
		i++;
	}
	return (comp);
}

// #include <stdio.h> 
// int main (void)
// {
// 	char myStr1[] = "ABCDDA";
// 	char myStr2[] = "AB";
// 	int size = 4;

// 	printf("%d\n", strncmp(myStr1, myStr2, size));
// 	printf("%d", ft_strncmp(myStr1, myStr2, size));
// }