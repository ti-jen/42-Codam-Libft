/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:37:42 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/16 14:10:22 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	end;
	int	temp;

	i = 0;
	end = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = str[i] - 48;
		end = end * 10 + temp;
		i++;
	}
	if (str[0] == '-')
		end = -end;
	return (end);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main (void)
// {

// printf("%i\n", ft_atoi("-1+123-"));
// printf("%i", atoi("-1+123-"));
// }