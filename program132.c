#include <stdio.h>
#include <stdlib.h>

float Average(int Arr[] , int iSize )      
{
    int iCnt = 0 , iSum = 0 ;
    
    for (iCnt = 0; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt] ;
    } 
    return ((float) iSum / (float) iSize ) ;    //Issue
}

int main()
{
    int ilength = 0 , iCnt = 0 ;
    float fRet = 0.0f ;
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

    fRet = Average (ptr,ilength);

    printf("Eements Avrage is are is : %f",fRet);

    free(ptr);

    return 0 ;
}