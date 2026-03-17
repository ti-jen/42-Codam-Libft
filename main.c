#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <bsd/string.h>

int main() {

	char c = '	';
	char word[] = "1234567890";

	printf("ft_isalnum %i\n", ft_isalnum(c));
	printf("isalnum %i\n\n", isalnum(c));
	printf("ft_isalpha %i\n", ft_isalpha(c));
	printf("isalpha %i\n\n", isalpha(c));
	printf("ft_isascii %i\n", ft_isascii(c));
	printf("isascii %i\n\n", isascii(c));
	printf("ft_isdigit %i\n", ft_isdigit(c));
	printf("isdigit %i\n\n", isdigit(c));
	printf("ft_strlen %ld\n", ft_strlen(word));
	printf("strlen %ld\n\n", strlen(word));
	printf("ft_strlen %ld\n", ft_strlen(word));
	printf("strlen %ld\n\n", strlen(word));


	char str[50] = "super long tekst to test if the text is dif";
	char str2[50] = "super long tekst to test if the text is dif";
	printf("\nBefore memset(): %s\n", str);
	printf("\nBefore ft_memset(): %s\n", str2);

	memset(str + 13, '+', 8);
	ft_memset(str2 + 13, '+', 8);

	printf("\nAfter memset():  %s", str);
	printf("\nAfter ft_memset():  %s", str2);

	bzero(str + 13, 8);
	ft_bzero(str2 + 13, 8);

	printf("\nAfter bzro():  %s", str);
	printf("\nAfter ft_bzro():  %s", str2);

  	 char dest[50] = "Geeksfor";
  	 printf("Before memcpy dest = %s\n", dest);
  	//  memcpy(dest + 5, dest, strlen(dest) + 1);
  	 ft_memcpy(dest + 5, dest, strlen(dest) + 1);
   	printf("After ft_memcpy dest = %s\n", dest);
	
	char test[50] = "Geeksfor";
  	 printf("Before memmove dest = %s\n", test);
  	//  memcpy(dest + 5, dest, strlen(dest) + 1);
  	 ft_memmove(test + 5, test, strlen(test) + 1);
   	printf("After memmove dest = %s\n", test);


	char s1[50] = "copystufffjoduhgopshgr!";
	char s3[100];
	int size = 5;
	size_t len2 = ft_strlcpy(s3, s1, size);

	printf("\n%s\n", s3);
	printf("lenght = %zu", len2);
}