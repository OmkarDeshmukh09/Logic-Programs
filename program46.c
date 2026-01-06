//Factors of 6

#include <stdio.h>

    //Wrong Apporach
void DisplayFactors(int ino)
{
    if ((ino % 1) == 0)
    {
        printf("1\n");
    }
    if ((ino % 2) == 0)
    {
        printf("2\n");
    }
    if ((ino % 3) == 0)
    {
        printf("3\n");
    }
    if ((ino % 4) == 0)
    {
        printf("4\n");
    }
    if ((ino % 5) == 0)
    {
        printf("6\n");
    }
}

int main ()
{
    int ivalue = 0;

    printf("Enter Number : \n");
    scanf("%d",&ivalue);

    DisplayFactors(ivalue);

    return 0;
}