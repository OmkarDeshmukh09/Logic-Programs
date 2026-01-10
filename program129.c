#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[] , int iSize )      
{
    int iCnt = 0 , iCount = 0 ;
    
    for (iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++ ;
        } 
    } 
    return iCount ;
}

int main()
{
    int ilength = 0 , iCnt = 0 , iRet = 0 ;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&ilength);

    ptr =(int *) malloc(ilength*sizeof(int));
    if( NULL == ptr)          //    INDUSTRIAL way of coading
    {
        printf("Unable to allocate Memory ");
        return -1;
    }
    
    printf("Enter the Elements : \n");
    for (iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }    

    iRet = CountEven (ptr,ilength);

    printf("Number of Even Elements are is : %d",iRet);

    free(ptr);

    return 0 ;
}