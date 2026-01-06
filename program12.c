/*
    Algotithm:
                Start 
                        Accept numbers and store as no
                        Divide no by 2
                        if the remainder is 0 
                            then display as even 
                        otherwise 
                            display as odd 
                Stop


*/
#include <stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;
    
    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("It is a Even Number : \n");
    }
    else
    {
        printf("It is Odd Number : \n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}