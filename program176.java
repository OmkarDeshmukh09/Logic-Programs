/*
        input : 5
        output: A   B   C   D   E
        index : 1   2   3   4   5
        ASCII : 65  66  67  68  69
        VALUE   

        
*/


import java.util.Scanner;

class Pattern
{
    public void Display( int no)
    {
        int iCnt = 0;
        // int i = 97 ;
        char ch = 'A';

        for (iCnt = 1 ; iCnt <= no ; iCnt++ , ch++ ) 
        {
            System.out.printf("  %c\n",ch);
        }
        System.out.println();
    }
}

class program176
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