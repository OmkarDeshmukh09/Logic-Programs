///////////////////////////////////////////////////////////////////////
//
// Requried header files
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>                          //for input
#include <stdbool.h>                        //for output

bool CheckEvenOdd(int iNo)                  //function name
{
    //if
    return ((iNo % 2) == 0);
    /*                    {
                            return true;
                        }
                        else
                        {
                            return false;
                        }   
    */
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number \n ",iValue);
    }
    else
    {
        
        printf("%d is Odd Number \n ",iValue);
    }
    
    return 0;
}