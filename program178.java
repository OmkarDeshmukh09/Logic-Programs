/*
        input : 8
        output: z   y   x   w   u   v   t   s
        index : 1   2   3   4   5   6   7   8   
        
*/


import java.util.Scanner;

class Pattern
{
    public void Display( int no)
    {
        int iCnt = 0;
        // int i = 97 ;
        char ch = 'z';

        for (iCnt = 1 ; iCnt <= no ; iCnt++ , ch--) 
        {
            System.out.printf("  %c\t",ch);    
        }
        System.out.println();
    }
}

class program178
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.print("Enter the Frequncny : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);

    }
}