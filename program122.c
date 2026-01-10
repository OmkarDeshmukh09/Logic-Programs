#include <stdio.h>

void Display(int Arr[] , int iSize )      
{
    int iCnt = 0 ;
    
    for (iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\n", Arr[iCnt] );
    }
 
}

int main()
{
    int Arr[] = {10,20,30,40};  

    Display(Arr,4);       //Display( 100(address) , 4 (Value) )

    return 0 ;
}