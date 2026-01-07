// count numbers of factors

#include <stdio.h>

void CountFactorsNonFactors(int ino)
{
    int icnt = 0;
    int ifrequrncy1 = 0 ;      // for Factors  
    int ifrequrncy2 = 0 ;      // Non factors


    if(ino < 0)
    {
        ino = -ino;
    }

    for(icnt = 1 ; icnt < ino ; icnt++ )
    {
        if((ino % icnt) == 0 )
        {
            ifrequrncy1++ ;
        }
        else
        {
            ifrequrncy2++;
        }
        
    }

    printf("Numbers of Factors are : %d\n",ifrequrncy1);
    printf("Numbers of NonFactors are : %d\n",ifrequrncy2);

}

int main ()
{
    int ivalue = 0 ;

    printf("Enter the Number : \n");
    scanf("%d",&ivalue);

    CountFactorsNonFactors(ivalue);

    return 0 ;
}