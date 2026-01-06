// Input        10
// output :-  2  4  6  8  10

#include <stdio.h>
 
void Display (int ino)
    {
        int icnt = 0 ;

        for( icnt = 2 ; icnt <= ino ; icnt += 2 )    // += is short hand operator
        {
            printf("%d\t",icnt);
        }
        printf("\n");
    }

// TIME COMPLEXITY : O(n/2)

int main ()
{
    int ivalue = 0;

    printf("Please enter Frequency : \n");
    scanf("%d",&ivalue);
    
    Display(ivalue);
 
    return 0;
}