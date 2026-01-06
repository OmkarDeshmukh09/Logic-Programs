#include <stdio.h>

int AdditionTwoNumbers(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;        //Bussinesslogic
    return iSum;
}

int main()
{
    int iVAlue1 = 0 , iVAlue2 = 0 , iRet = 0;
    
    printf("Enter First number :  \n");
    scanf("%d",&iVAlue1);

    printf("Enter Second number :  \n");
    scanf("%d",&iVAlue2);

    iRet = AdditionTwoNumbers(iVAlue1,iVAlue2);

    printf("Addition is : %d\n ",iRet);

    return 0;
}