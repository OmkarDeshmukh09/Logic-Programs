/*
        input : 5
        output: a   b   c   d   e
        index : 1   2   3   4   5   

        
*/


import java.util.Scanner;

class Pattern
{
    public void Display( int no)
    {
        int iCnt = 0;
        int i = 97 ;

        for (iCnt = 1 ; iCnt <= no ; iCnt++ ) 
        {
            System.out.printf("%d\t",i);
            i++;
        }
        System.out.println();
    }
}

class program172
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