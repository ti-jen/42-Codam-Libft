/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:42:59 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/25 15:24:25 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static int	ft_count(char const *str, int n)
{
	int	i;
	int	count;
	int	word;

	word = 1;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		i++;
		while (str[i] == n && str[i] != '\0')
		{
			i++;
			word = 1;
		}
		if (word && str[i] != '\0')
			count++;
		word = 0;
	}
	return (count);
}

 static char	*ft_strncpy(char *dest, char const *src, unsigned int n)
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

	p = 0;
	j = 0;
	id = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (id == NULL)
		return (NULL);
	while (ft_count(s, c) > j)
	{
		while (s[p] == c && s[p] != '\0')
			p++;
		i = p;
		while (s[i] != c && s[i] != '\0')
			i++;
		id[j] = malloc(((i - p) + 1));
		ft_strncpy(id[j], &s[p], i - p);
		p = i;
		j++;
	}
	id[j] = NULL;
	return (id);
}

// #include <stdio.h>

// int main (void)
// {
// 	char **arr;

// 	char * splitme = strdup("Tripouille");
// 	arr = ft_split( splitme, ' ');

// 	// int i = 0;
// 	// while (i <= 5)
// 	// {
// 	// printf("%i == %s\n",i, arr[i]);
// 	// i++;
// 	// }

// }