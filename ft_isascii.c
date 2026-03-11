
int ft_isascii(int i)
{
    if (i >= 0 && i <= 127)
    {
        return (1);
    }

    return (0);
}


// #include <stdio.h>
// #include <ctype.h>

// int main ()
// {
//     int c = 127 ;

//     printf("%i\n", isascii(c));
//     printf("%i", ft_isascii(c));

// }