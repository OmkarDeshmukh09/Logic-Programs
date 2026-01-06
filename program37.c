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
    int ivalue = 0;
    printf("Please enter Frequency : \n");
    scanf("%d",&ivalue);
    
    Display(ivalue);
 
    return 0;
}