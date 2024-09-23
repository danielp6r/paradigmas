package q2;

import java.util.Scanner; // import the Scanner class

class Password
{
    //passcode
    String pw = "a";
    int i=3;

    void input()
    {
        while ( i - 3 != -3 )
        //enquanto houver [0-3] tentativas
        {
            System.out.println("remaining tries: " + i + "\n");
            Scanner scan = new Scanner(System.in);
    
            // input
            System.out.println("enter a passwd: ");
            String asdf = (scan.next());
    
            // check the correctness of the input
            if (asdf.equals(pw))
            {
                System.out.println("correct\n");
                i=3;
                break;
            }
            else
            {
                System.out.println("incorrect\n");
                i--;
            }
        }
    }
    void changePw()
    {
        while ( i-3 != -3)
        {
            // input
            System.out.println("remaining tries: " + i + "\n");
            Scanner scan = new Scanner(System.in);
            System.out.println("enter the old passwd: ");
            String asdf =  scan.next();
    
            // check the correctness of the input
            if (asdf.equals(pw))
            {
                i=0;
                System.out.println("correct, u may now type the new password: ");
                pw = (scan.next());
                break;
            }
            else
            {
                System.out.println("incorrect\n");
                i--;
            }
        }
    }
}