#include <stdio.h>

//  1  2  3  4  5 
void Display ()
    {
        int icnt = 0 ;

        for( icnt = 1; icnt <= 5; icnt++)
        {
            printf("%d\t",icnt);
        }
        printf("\n");
    }

int main ()
{
   
    Display();
    return 0;
}