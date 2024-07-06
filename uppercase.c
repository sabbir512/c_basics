#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string inputs = get_string("Before: ");

    printf("After: ");
    for (int i = 0; i < strlen(inputs); i++)
    {
    if(inputs[i] >= 'a'&& inputs[i] <= 'z')
    {
        printf("%c", inputs[i] - 32);
    }
    else
    {
        printf("%c", inputs[i]);
    }
    }

    printf("\n");
    
}