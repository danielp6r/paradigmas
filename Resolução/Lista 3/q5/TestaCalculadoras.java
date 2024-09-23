package q5;

public class TestaCalculadoras
{
     public static void main(String []args)
     {
       Calc n = new Calc();
       n.a = 1;
       System.out.println(n.a + "\n");
       n.div(2);
       System.out.println(n.a + "\n");
       CCalc nn = new CCalc();
       nn.a = 2;
       nn.pow(2);
       System.out.println(nn.a + "\n");
     }
}