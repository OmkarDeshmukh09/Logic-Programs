import java.io.*;

class program75
{
    public static void main(String A [] ) 
    {
        int ino = 0;
        int i   = 0 ;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));        
        System.out.println("Enter Number :");
        try
        {
            ino = Integer.parseInt(bobj.readLine());
        }
        catch(IOException iobj)
        {}

        for(i = 1; i <= (ino / 2) ; i++)
        {
            if ((ino % i) == 0) 
            {
                System.out.println(i);    
            }
        }
    }    
}
