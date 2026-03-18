/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 10:03:00 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/18 11:05:23 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_intlength(int n)
{
	int	l;

	l = 0;
	while (n != 0)
	{
		l++;
		n = n / 10;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int		l;
	int		i;
	char	*res;

	l = ft_intlength(n);
	res = ft_calloc(l, 4);
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		res[0] = '-';
	}
	else
		l--;
	while (n > 0)
	{
		res[l] = n % 10 + '0';
		n = n / 10;
		l--;
	}
	return (res);
}

// int main (void)
// {
// 	char *test = ft_itoa(-20213854);
// 	printf("%s", test);
// }