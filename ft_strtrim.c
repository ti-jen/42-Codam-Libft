/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:06:26 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/25 12:50:16 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

static int	ft_checksim(int const n, char const *set)
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
		if (!ft_checksim(s1[i], set))
			l++;
		i++;
	}
	res = malloc(l + 1);
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

// #include <stdio.h>
// int main (void)
// {
// 	char set [] = "\t \n";
// 	printf("%s",ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", set ));

// }