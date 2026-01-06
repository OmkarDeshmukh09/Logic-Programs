///////////////////////////////////////////////////////////////////////
//
// Requried header files
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>                                      // for output or input 
#include <stdbool.h>                                    // for for boolean datatype

////////////////////////////////////////////////////////////////////////
//
//Functionn name :
//discrtion
//input 
//output
//author
//date
///////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    
    iRem = iNo % 2;

    if(iRem == 0)
    {        return true;    }
    else
    {        return false;    }
}
///////////////////////////////////////////////////////////////////////
//
// Entry point function of application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {   printf("%d is Even Number \n ",iValue);    }
    else
    {   printf("%d is Odd Number \n ",iValue);    }
    
    return 0;
}
