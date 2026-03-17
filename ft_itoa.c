#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		res;
	int		*array;
	size_t	i;

	i = 0;
	res = nmemb * size;
	array = malloc(res);
	while (i <= nmemb)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}

char *ft_itoa(int n)
{
	int l;
	int i;
	int in;
	char	*res;
	in = n;
	l = 0;
	while (in != 0)
	{
		l++;
		in = in /10;
	}
	res = ft_calloc(l, 4);
	if (n < 0)
	{
		n = -n;
		res[0] = '-';
	}
		else
		l--;
	while ( n > 0)
	{
		res[l] = n % 10 + '0';
		n = n / 10;
		l--;
	}
	return(res);
}

int main (void)
{
	char *test = ft_itoa(-12345678);
	printf("%s", test);
}