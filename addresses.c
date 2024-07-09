#include <stdio.h>

// int main (void)
// {
//     int n = 50;
//     int *p = &n;
//     printf("%p\n", p);
// }

// int main (void)
// {
//     char *s = "Hi!"; //This * is pointer and using char for string
//     printf("%p\n", s);
//     printf("%p\n", &s[0]);
//     printf("%p\n", &s[1]);
//     printf("%p\n", &s[2]);
//     printf("%p\n", &s[3]);
// }


//arithmetic in memory
int main (void)
{
    char *s = "Hi!"; //This * is pointer and using char for string
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+500));

}