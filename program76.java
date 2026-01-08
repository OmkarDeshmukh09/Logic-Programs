import java.io.*;

class program76
{
    //Not a good programming practicebut is faster in writting 
    public static void main(String A [] ) throws IOException
    {
        int ino = 0;
        int i   = 0 ;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));        
        System.out.println("Enter Number :");
        
        ino = Integer.parseInt(bobj.readLine());

        for(i = 1; i <= (ino / 2) ; i++)
        {
            if ((ino % i) == 0) 
            {
                System.out.println(i);    
            }
        }
    }    
}
