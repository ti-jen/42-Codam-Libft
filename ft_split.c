/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:42:59 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/18 16:29:07 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int	ft_count(char const *str, int n)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == n)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char const *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**id;
	int		i;
	int		p;
	int		j;
	int		l;

	i = 0;
	p = 0;
	j = 0;
	l = ft_count(s, c) + 1;
	id = malloc(l * 4);
	while (j < l && ft_count(s, c) != 0)
	{
		if (s[i] == c)
		{
			id[j] = malloc(((i - p) + 1) * 4);
			id[j] = ft_strncpy(id[j], &s[p], i - p);
			j++;
			p = i;
		}
		i++;
	}
	return (id);
}

// #include <stdio.h>

// int main (void)
// {
// 	char **arr;

// 	arr = ft_split("split--splut-sploet", '-');

// 	int i = 0;
// 	while (i < 4)
// 	{
// 	printf("%s\n", arr[i]);
// 	i++;
// 	}

// }