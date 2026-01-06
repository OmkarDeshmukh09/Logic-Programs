#include <stdio.h>

//   *  *  *  *  *
void Display ()
    {
        int icnt = 0 ;

        icnt = 1;
        while(icnt <= 5)
        {
            printf("*\t");
            icnt ++;
        }
        printf("\n");
    }

int main ()
{ 
    Display();
    return 0;
}