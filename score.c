#include <stdio.h>

int main (void)
{
    //Declare an array in c language
    int scores[3];
    scores[0] = 77;
    scores[1] = 45;
    scores[2] = 56;

    printf("Avarage: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}