#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct 
{
string name;
string number;
}
person;

int main(void)
{
    person people[2];
    people[0].name = "Sabbir";
    people[0].number = "+880 1763-656778";

    people[1].name = "Himel";
    people[1].number = "+880 1665-213465";

    string name = get_string("Name: ");

//Linear algorithm thinking
for (int i =0; i < 2; i++)
{
    if(strcmp(people[i].name, name) == 0)
    {
        printf("%s\n", people[i].number);
        return 0;
    }
}
printf("Not Founded\n");
}