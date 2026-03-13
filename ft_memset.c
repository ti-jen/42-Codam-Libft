
// #include <stdio.h>
// #include <string.h>

void *ft_memset(void *s, int c, int n)
{
	char *p;
	p = s;
	while ( n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return(s);
	
}


// int main()
// {
// 	char str[50] = "super long tekst to test if the text is dif";
// 	char str2[50] = "super long tekst to test if the text is dif";
// 	printf("\nBefore memset(): %s\n", str);
// 	printf("\nBefore ft_memset(): %s\n", str2);

// 	memset(str + 13, '+', 8);
// 	ft_memset(str2 + 13, '+', 8);

// 	printf("\nAfter memset():  %s", str);
// 	printf("\nAfter ft_memset():  %s", str2);
// 	return 0;
// }