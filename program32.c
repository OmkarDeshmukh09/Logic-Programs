#include <stdio.h>

//   1  *  2  *  3  *  4  *  5  *
void Display ()
    {
        int icnt = 0 ;

        icnt = 1;
        while(icnt <= 5)
        {
            printf("%d\t*\t", icnt);
            icnt ++;
        }
        printf("\n");
    }

int main ()
{ 
    Display();
    return 0;
}