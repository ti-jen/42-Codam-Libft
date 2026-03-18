/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:06:26 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/18 11:09:19 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

const int	ft_checksim(int const n, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (n == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		l;
	char	*res;

	i = 0;
	l = 0;
	while (s1[i] != '\0')
	{
		while (ft_checksim(s1[i], set))
			i++;
		i++;
		l++;
	}
	res = malloc(l * 4);
	if (res == NULL)
		return (NULL);
	while (l >= 0)
	{
		while (ft_checksim(s1[i], set))
			i--;
		res[l] = s1[i];
		i--;
		l--;
	}
	return (res);
}

// int main (void)
// {
// 	char string1[] = "AB1268473625234CD4325721268342E";
// 	char string2[] = "12345A6789";

// 	printf("%s",ft_strtrim(string1, string2));

// }