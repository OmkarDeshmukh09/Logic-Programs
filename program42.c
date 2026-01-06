// Input        10
// output :-  2  4  6  8  10

#include <stdio.h>
 
void Display (int ino)
    {
        int icnt = 0 ;

        for( icnt = 1 ; icnt <= ino ; icnt ++ )    
        {
            if ( (icnt % 2) == 0)
            {
                printf("%d\t",icnt);
            }
        }
        printf("\n");
    }

// TIME COMPLEXITY : O(N)

int main ()
{
    int ivalue = 0;

    printf("Please enter Frequency : \n");
    scanf("%d",&ivalue);
    
    Display(ivalue);
 
    return 0;
}