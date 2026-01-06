//Factors of 6

#include <stdio.h>

void DisplayFactors(int ino)
{
    int icnt = 0;

    if ( ino < 0)
    {
        ino = -ino;
    }

    for(icnt = 1 ; icnt <= (ino / 2) ; icnt++)
    {
        if ((ino % icnt) == 0)
        {
            printf("%d\n",icnt);
        }
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