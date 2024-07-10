#include <stdio.h>
#include <stdlib.h>

typedef struct node{
int number;
struct node *next;
}
node;
int main (void)
{
    int *list = malloc(3 * sizeof(int));

//Checking if anything goes wrong mean computer out of memory then we will imedately return 1
    if(list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //....

    int *temp = realloc(list, 4 * sizeof(int));
    if(temp == NULL)
    {
        free(list);
        return 1;
    }
    list = temp;
    list[3] = 4;

    for(int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
    return 0;
}