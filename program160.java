//Input  : 5
//Output : -5   -4  -3  2   -1   0    1   2   3   4   5   6
//Counter:  1    2   3  4    5   6    7   8   9   10  11  12

import java.util.*;

class Pattern
{
    public void Display(int iNO)
    {
        int iCnt = 0 ;
        
        for(iCnt = -iNO ; iCnt <= 0 ; iCnt ++)
        {     
            System.out.print(iCnt+"\t");   
        }

        for(iCnt = 1 ; iCnt <= iNO ; iCnt ++)
        {     
            System.out.print(iCnt+"\t");   
        }
        System.out.println();
    }
}

class program160

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
