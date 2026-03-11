#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main() {

	char c = '	';

	printf("ft_isalnum %i\n", ft_isalnum(c));
	printf("isalnum %i\n\n", isalnum(c));
	printf("ft_isalpha %i\n", ft_isalpha(c));
	printf("isalpha %i\n\n", isalpha(c));
	printf("ft_isascii %i\n", ft_isascii(c));
	printf("isascii %i\n\n", isascii(c));
	printf("ft_isdigit %i\n", ft_isdigit(c));
	printf("isdigit %i\n\n", isdigit(c));
	return (0);
}