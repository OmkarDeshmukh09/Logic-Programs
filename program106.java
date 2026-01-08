// OOP Desigin
import java.util.*;

class ArrayX
{
    private int Arr[];
    private int iSize ;

    public ArrayX(int ino)
    {
        iSize = ino;
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0 ;

        System.out.println("Enter the Elements of Array : ");

        for ( i = 0; i < Arr.length; i++) 
        {
            Arr[i] = sobj.nextInt();    
        }

    }

    public void Display()
    {
        System.out.println("Elements of Array are : ");
        int i = 0 ;

        for (i = 0; i < Arr.length; i++) 
        {
            System.out.println(Arr[i]);    
        }
    }
}

class program106
{
    public static void main(String A [])
    {
        int iSize = 0,  Arr = 0 ;
        ArrayX aobj1 = new ArrayX(5);
        System.out.println(aobj1.iSize);            //ERROR

        //Bad code { Need of Access Specifiers}
        aobj1.iSize = 11;                           //ERROR
        aobj1.Arr = null ;                          //ERROR

        ArrayX aobj2 = new ArrayX(7);
        System.out.println(aobj2.iSize);            //ERROR
    }
}