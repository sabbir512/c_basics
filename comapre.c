#include <cs50.h>
#include <stdio.h>

int main (void)
{
int x = get_int("What's x? ");
int y = get_int("What's y? ");

if (x < y)
{
printf("X is less Than Y\n");
}else if(x > y)
{
    printf("X is greater than y\n");
}else
{
 printf("X is equal to y\n");   
}
}