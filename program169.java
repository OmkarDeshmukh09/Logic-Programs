/*
        iRow: 4
        iCol: 4

        *   *   *   *
        2   2   2   2
        *   *   *   *
        4   4   4   4
           

*/


import java.util.Scanner;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0 , j = 0;

        for (i = 1; i <= iRow; i++) 
        {
            for(j = 1 ; j <= iCol ; j ++)
            {
                if ((i % 2) == 0) 
                {
                    System.out.print(" "+i+" \t");
                }
                else
                {
                    System.out.print(" *\t");
                }
            }    
            System.out.println();
        }
    }
}

class program169
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0 ;

        System.out.print("Enter number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter number of Coloumn : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);

    }
}