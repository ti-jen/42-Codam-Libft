#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}

	return (c);
}


// int main ()
// {
// 	char ch = '-';
// 	printf("%c\n", toupper(ch));
// 	printf("%c", ft_toupper(ch));

// 	return(0);
// }