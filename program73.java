import java.util.*;

class program73
{
    public static void main(String A [] ) 
    {
        int ino = 0;
        int i   = 0 ;
        
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number :");
        ino = sobj.nextInt();

        for(i = 1; i <= ino / 2 ; i++)
        {
            if ((ino % i) == 0) 
            {
                System.out.println(i);    
            }
        }
    }    
}
