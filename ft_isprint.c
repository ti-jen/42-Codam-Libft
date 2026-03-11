
int ft_isprint(int i)
{
	if (i >= ' ' && i <= '~')
	{
		return (1);
	}

	return (0);
}


// #include <stdio.h>
// #include <ctype.h>

// int main ()
// {
// 	int c = '	' ;

// 	printf("%i\n", isprint(c));
// 	printf("%i", ft_isprint(c));

// }