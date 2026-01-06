#include <stdio.h>
#include <stdbool.h>

bool CheckDivisiable(int ino1,int ino2)
{
    if((ino1 % ino2)==0)
        {
            return true;
        }
        else
        {
            return false;
        }
}

int main ()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    bool bret = false;

    printf("Enter first Number : \n");
    scanf("%d",&ivalue1);

    printf("Enter second Number : \n");
    scanf("%d",&ivalue2);

    bret = CheckDivisiable(ivalue1,ivalue2);
    
    if(bret==true)
    {
        printf("It is completly divisiable \n");
    }
    else
    {
        printf("It's not divisiable \n");
    }
 
    return 0;
}