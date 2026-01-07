#include<stdbool.h>
#include <stdio.h>

int CheckPrime(int ino)
{
    int icnt = 0;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(icnt = 2 ; icnt <=(ino / 2) ; icnt++ )
    {
        if((ino % icnt) == 0 )
        {
            break;          // only one prime is checked #OPTIMIZATION
        }
    }

    if(icnt >(ino/2))     // no Factors
    {
        return true;
    }
    else                    //atleast one factor
    {
        return false;
    }
}

int main ()
{
    int ivalue = 0 ;
    bool bret = false ;

    printf("Enter the Number : \n");
    scanf("%d",&ivalue);

    bret = CheckPrime(ivalue);

    if(bret == true)
    {
        printf("%d Is primr number \n",ivalue);
    }
    else
    {
        printf("%d Is not a Prime number\n",ivalue);
    }

    return 0 ;
}

//time complexitiy : for prime - N/2
//time complexitiy : non prime - either 1 or 2