#include <cs50.h>
#include <stdio.h>
//Algorith
int main(void)
{
int number[] = {30, 20, 500, 40, 20, 59, 100};
int n = get_int("Number: ");

for (int i = 0; i < 8; i++)
{
    if(number[i] == n)
    {
        printf("Found\n");
        return 0;
    }
}

printf("Not Found\n");
return 1;
}