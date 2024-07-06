#include <cs50.h>
#include <stdio.h>

int main (void)
{
    long x = get_long("Put X Value: ");
    long y = get_long("Put Y Value: ");

    float z = (float) x / (float) y ;

    printf("%f\n", z);
}