#include <stdio.h>

void Display(int *ptr)      //Issue prints the same output
{
    int iCnt = 0 ;
    
    for (iCnt = 0; iCnt <4; iCnt++)
    {
        printf("%d\n",*ptr);
        //ptr++;  this will make pointer to move
    }
 
}

int main()
{
    int Arr[] = {10,20,30,40};

    Display(Arr);       //Call by Address

    return 0 ;
}