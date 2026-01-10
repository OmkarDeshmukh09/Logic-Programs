#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

//typedef IPTR int * ; its wrong syntax
typedef int * IPTR ;

bool LinearSearch(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0 , iCount = 0 ;

    // tome complexctiy is n { O(n) }
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt]  == iNo )
        {
            iCount++;
        }
    }

    if (iCount > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iLength = 0 , iCnt = 0 , iValue = 0 ;
    IPTR iPtr = NULL;
    bool bRet = false;

    printf("Enter the number of Elements : \n");
    scanf("%d",&iLength);

    //STEP 1 :Allocate the memory
    iPtr = (IPTR) malloc (iLength * sizeof(int));

    if (NULL == iPtr)
    {
        printf("Unable to alloate memory");
        return -1 ;
    }

    printf("Enter the Values : \n");
    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }
    
    printf("Enter the number to Search : \n");
    scanf("%d",&iValue);

    //STEP 2 : Use the memory
    //Call to the Function which contains bussiness logic
    
    bRet = LinearSearch(iPtr,iLength,iValue);

    if (bRet == true)
    {
        printf(" %d is present in the Data \n",iValue);
    }
    else
    {
        printf(" %d is present not in the Data \n",iValue);
    }
    

    //STEP : 3 Free the memory 

    free(iPtr);

    return 0 ;
}