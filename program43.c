// Input  12 , 2  Output :- true
// Input  12 , 3  Output :- true
// Input  12 , 5  Output :- false
// Input  12 , 12 Output :- true
// Input  12 , 7  Output :- false 
#include <stdio.h>

int main ()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf("Enter first Number : \n");
    scanf("%d",&ivalue1);

    printf("Enter second Number : \n");
    scanf("%d",&ivalue2);

    if((ivalue1 % ivalue2)==0)
    {
        printf("It is completly divisiable \n");
    }
    else
    {
        printf("It's not divisiable \n");
    }
 
    return 0;
}