#include <stdio.h>
 
void Display (int ino)
    {
        int icnt = 0 ;

        for( icnt = 1; icnt <= ino; icnt++)
        {
            printf("%d\t",icnt);
        }
        printf("\n");
    }

int main ()
{  
    Display(100);
 
    return 0;
}