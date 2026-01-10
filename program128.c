#include <stdio.h>
#include <stdlib.h>

int Summation(int Arr[] , int iSize )      
{
    int iCnt = 0 , isum = 0 ;
    
    for (iCnt = 0; iCnt < iSize ; iCnt++)
    {
        isum = isum + Arr[iCnt]; 
    } 
    return isum ;
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

    iRet = (ptr,ilength);

    printf("Addition is : %d",iRet);

    free(ptr);

    return 0 ;
}