#include <stdio.h>
 
void Display (int ino)
    {
        int icnt = 0 ;

        for( icnt = ino ; icnt >= 1 ; icnt-- )
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