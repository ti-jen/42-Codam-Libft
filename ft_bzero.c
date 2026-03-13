
// #include <stdio.h>
// #include <string.h>

void *ft_bzero(void *s, int n)
{
	char *p;
	p = s;
	while ( n > 0)
	{
		*p = '\0';
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

// 	bzero(str + 5, 4);
// 	ft_bzero(str2 + 5 , 4);

// 	printf("\nAfter memset():  %s", str + 10);
// 	printf("\nAfter ft_memset():  %s", str2 + 10);
// 	return 0;
// }