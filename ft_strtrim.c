// #include <stdlib.h>
// #include <stdio.h>

// char *ft_strtrim(char const *s1, char const *set)
// {
// 	int i;
// 	int l;
// 	int c;
// 	char	*res;

// 	l = 0;
// 	c = 0;
// 	i = 0;
// 	while(s1[i] != '\0')
// 	{
// 		while(set[c] != '\0')
// 		{
// 			if (s1[i] == set[c])
// 				l--;
// 			c++;
// 		}
// 		c = 0;
// 		i++;
// 		l++;
// 	}
// 	res = malloc(l * 4);
// 	printf("%i", l);
// 	return (0);
// }

// // int main (void)
// // {
// // 	char string1[] = "A23232DDDBBERRDADBBBEE22A";
// // 	char string2[] = "23BDER";

// // 	printf("%s",ft_strtrim(string1, string2));

// // }