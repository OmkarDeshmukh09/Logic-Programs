#include<stdbool.h>
#include <stdio.h>

int CheckPrime(int ino)
{
    int icnt = 0;
    bool bflag = true;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(icnt = 2 ; icnt <=(ino / 2) ; icnt++ )
    {
        if((ino % icnt) == 0 )
        {
            bflag = false;
            break;          // only one prime is checked #OPTIMIZATION
        }
    }
    return bflag;
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