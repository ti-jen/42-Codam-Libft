
int ft_isalpha (int i)
{
    if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
    {
        return (1);
    }

    return (0);
}


// #include <stdio.h>
// #include <ctype.h>

// int main ()
// {
//     char c = 'a';

//     printf("%i\n", isalpha(c));
//     printf("%i", ft_isalpha(c));



// }