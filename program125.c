#include <stdio.h>
#include <stdlib.h>

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
    int ilength = 0 , iCnt = 0 ;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&ilength);

    ptr =(int *) malloc(ilength*sizeof(int));
    if(ptr = NULL)          //Major issue it should be (==) and not (=) it will always go in if and will not run
    {
        printf("Unable to allocate Memory ");
        return -1;
    }
    
    printf("Enter the Elements : \n");
    for (iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }    

    Display(ptr,ilength);

    free(ptr);

    return 0 ;
}