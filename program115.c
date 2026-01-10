#include <stdio.h>

void Display(int *Arr)      //will changee the name from ptr to Arr to knowh that this ia a pointer
{
    int iCnt = 0 ;
    
    for (iCnt = 0; iCnt <4; iCnt++,Arr++)
    {
        printf("%d\n",*Arr);
    }
 
}

int main()
{
    int Arr[] = {10,20,30,40};

    Display(Arr);       //Call by Address

    return 0 ;
}