//Input 1  :
//Input 2  : 
//Output   : 1    *   2   *   3   *
//Counter  : 1    2   3   4   5   6 

import java.util.*;

class Pattern
{
    public void Display(int iRow , int iCol )
    {
        int i = 0 , j = 0;
        
        for(i = 1 ; i <= iRow ; i ++)
        {   
            for ( j = 0; j <= iCol ; j++) 
            {
                System.out.print("*\t");
            }
        System.out.println();
        }
    }
}

class program164
{
    public static void main(String A [] ) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 , iValue2  = 0 ;

        System.out.println("Enter the number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Coloumns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1 , iValue2);
    }
}
