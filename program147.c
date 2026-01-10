#include <stdio.h>
#include<stdlib.h>

//typedef IPTR int * ; its wrong syntax
typedef int * IPTR ;

int Minimum (int Arr[] , int iSize)
{
    int iCnt = 0 , iMin = 0 ;       

    for (iMin = Arr[0] , iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}


int main()
{
    int iLength = 0 , iCnt = 0 , iRet = 0;
    IPTR iPtr = NULL;

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
    
    //STEP 2 : Use the memory
    //Call to the Function which contains bussiness logic
    
    iRet = Minimum(iPtr,iLength);

    printf(" Minimum number is : %d \n",iRet);

    //STEP : 3 Free the memory 

    free(iPtr);

    return 0 ;
}