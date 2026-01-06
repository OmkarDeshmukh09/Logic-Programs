/*
    Algorithm

    START
            Accept first number as no1
            Accept second number as no2
            Perform the addition of n01 & no2
            Dislpay the addition on screen
    STOP
*/

//////////////////////////////////////////////////////////////////
//
//          REQURID HEADER FILES
//
//////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Discription   : It is used to perform addition
//  Input  :        Float, Float
//  Output :        Float
//  Author :        Omkar Balasaheb Deshmukh
//  Date   :        09/11//2025
//
//////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,                     //First input
                            float fNo2                      //Second input
                        )
{
    float fSum = 0;                                         // To store the result

    if(fNo1 < 0.0f)                                         //Updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                         //Updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                                     //Bussiness logic
 
    return fSum;

}   //End of Addition Function


//////////////////////////////////////////////////////////////////
//
//      ENTRY POINT FUNCTION FOR APPLICATION
//
//////////////////////////////////////////////////////////////////

int main()
{
    float fVAlue1 = 0.0f , fVAlue2 = 0.0f ;                 //To accept user input
    float fRet = 0.0f;                                      //To store the result
    
    printf("Enter First number :  \n");
    scanf("%f",&fVAlue1);

    printf("Enter Second number :  \n");
    scanf("%f",&fVAlue2);

    fRet = AdditionTwoNumbers(fVAlue1,fVAlue2);             //Method call /Api call/ function call

    printf("Addition is : %f\n ",fRet);

    return 0;
}   //End of main

//////////////////////////////////////////////////////////////////
//
//  Tastecases handelled sucessfully by application 
//
//  Input 1: 10.5      Input2 : 3.2        Output : 13.7
//  Input 1: 10.5      Input2 : -3.2       Output : 13.7
//  Input 1: -10.5     Input2 : 3.2        Output : 13.7
//  Input 1: -10.5     Input2 : -3.2       Output : 13.7
//  Input 1: 10.5      Input2 : 0.0        Output : 10.5
//
//////////////////////////////////////////////////////////////////
