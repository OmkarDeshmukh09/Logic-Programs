//Input  : 6
//Output : 1    *   2   *   3   *

import java.util.*;

class Pattern
{
    public void Display(int iNO)
    {
        int iCnt = 0 ;
        
        for(iCnt = 1 ; iCnt <= iNO ; iCnt ++)
        {
            if((iCnt % 2) == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(iCnt+"\t");
            }
        }

        System.out.println();
    }
}

class program154

{
    public static void main(String A [] ) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0 ;

        System.out.println("Enter the Frequency : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}
