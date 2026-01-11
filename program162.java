//Input  : 6
//Output : 1    *   2   *   3   *
//Counter: 1    2   3   4   5   6 

import java.util.*;

class Pattern
{
    public void Display(int iNO)
    {
        int iCnt = 0 , iCount = 0;
        
        iCount = 1;
        for(iCnt = 1 ; iCnt <= iNO ; iCnt ++)
        {   
            if (iCnt % 2 == 0) 
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(iCount+"\t");
                iCount++;
            }
        }
    }
}

class program162

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
