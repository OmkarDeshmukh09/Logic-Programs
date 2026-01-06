/* Steps to understand
Step 1 : Understand the problem statement 
Step 2 : Write the algorith
Step 3 : Decide the programming language
Step 4 : Write the program
Step 5 : Test the program
*/
/*
    Algorithm

    START
        Accept first number as no1
        Accept second number as no2
        Perform the addition of n01 & no2
        Dislpay the addition on screen
    STOP

*/

#include <stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;

    //Updater 
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;        //Bussiness logic
    return fSum;
}

int main()
{
    float fVAlue1 = 0.0f , fVAlue2 = 0.0f , fRet = 0.0f;
    
    printf("Enter First number :  \n");
    scanf("%f",&fVAlue1);

    printf("Enter Second number :  \n");
    scanf("%f",&fVAlue2);

    fRet = AdditionTwoNumbers(fVAlue1,fVAlue2);

    printf("Addition is : %f\n ",fRet);

    return 0;
}