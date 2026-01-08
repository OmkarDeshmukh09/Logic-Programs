import java.util.*;

class Number
{
    public boolean CheckPerfect(int iNo)
    {
        int i = 0 , isum = 0 ;
        
        if (iNo < 0 )                           //Updater
        {
            iNo = - iNo;    
        }

        //  Reverse loop

        for(i = iNo / 2 ; ( i >= 1 ) && ( isum < iNo ) ; i--)
        {
            if ((iNo % i) == 0) 
            {
                isum = isum + i;
            }
        }
        return(isum == iNo);       //CHANGE
    }
}// End of Number Class 

class program85
{
    public static void main(String A [] ) 
    {
        int iValue = 0;
        boolean bRet = false;
        
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number :");
        iValue = sobj.nextInt();
    
        Number nobj = new Number();
        bRet = nobj.CheckPerfect(iValue);

    if (bRet == true) 
    {
        System.out.println(iValue+" is Perfect number");    
    }
    else
    {
        System.out.println(iValue+" is not a Perfect number");
    }

    // Important
        
    sobj =  null;
    nobj =  null;

    System.gc();
    }    
}
