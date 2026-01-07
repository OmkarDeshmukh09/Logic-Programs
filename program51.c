// count numbers of factors

#include <stdio.h>

int CountFactors(int ino)
{
    int icnt = 0;
    int ifrequrncy = 0 ;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(icnt = 1 ; icnt <=(ino / 2) ; icnt++ )
    {
        if((ino % icnt) == 0 )
        {
            ifrequrncy++ ;
        }
    }

    return ifrequrncy;

}

int main ()
{
    int ivalue = 0 ;
    int iret = 0 ;

    printf("Enter the Number : \n");
    scanf("%d\n",&ivalue);

    iret = CountFactors(ivalue);

    printf("Number of factors are : %d\n",iret);

    return 0 ;
}