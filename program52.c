// count numbers of factors

#include <stdio.h>

int CountNonFactors(int ino)
{
    int icnt = 0;
    int ifrequrncy = 0 ;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(icnt = 1 ; icnt < ino ; icnt++ )
    {
        if((ino % icnt) != 0 )
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

    iret = CountNonFactors(ivalue);

    printf("Number of factors are : %d",iret);

    return 0 ;
}