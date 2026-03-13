void *ft_memcpy(void *dest, const void *src, int n)
{
   char *str1;
   const char *str2;
   
	str1 = dest;
   str2 = src;

while ( n > 0)
{
   *str1 = *str2;
   str2++;
   str1++;
   n--;
}
return (dest);

}

// #include <stdio.h>
// #include <string.h>

// int main ()
// {
//    // const char src[50] = "123456789";
//    char dest[50] = "Learningisfun";
//    char dest2[50] = "Learningisfun";
//    char dest3[50] = "Learningisfun";
//    printf("Before memcpy dest =  %s\n", dest);
//    memcpy(dest + 8, dest, 10);
//    printf("After memcpy dest =     %s\n", dest);
//    memmove(dest2 + 8, dest2, 10);
//    printf("After memmove dest2 =   %s\n", dest2);
//    ft_memcpy(dest3 + 8, dest3, 10);
//    printf("After ft_memcpy dest3 = %s\n", dest3);
//    return(0);
// }