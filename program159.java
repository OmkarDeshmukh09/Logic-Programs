//Input  : 6
//Output : 0    1   2   3   4   5   6
//Counter: 0    1   2   3   4   5   6

import java.util.*;

class Pattern
{
    public void Display(int iNO)
    {
        int iCnt = 0 ;
        
        for(iCnt = 0 ; iCnt <= iNO ; iCnt ++)
        {     
            System.out.print(iCnt+"\t");   
        }
        System.out.println();
    }
}

class program159

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
