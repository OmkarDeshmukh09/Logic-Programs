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

    }// End of ArrayX class

    public void Display()
    {
        System.out.println("Elements of Array are : ");
        int i = 0 ;

        for (i = 0; i < Arr.length; i++) 
        {
            System.out.println(Arr[i]);    
        }
    }
    public float Avarage()
    {
        int i = 0 , isum = 0;
        
        for(i = 0 ; i < Arr.length ; i++)
        {
            isum = isum +Arr[i];
        }
        return( isum / iSize);
    }
}

class program108
{
    public static void main(String A [])
    {
        float fRet = 0.0f;
        ArrayX aobj1 = new ArrayX(5);
        aobj1.Accept();
        aobj1.Display();
        
        fRet=aobj1.Avarage();

        System.out.println("Avrage is : "+fRet);


    }
}