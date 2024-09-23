package q4;
class Casa extends Porta
{
    int p1, p2, p3;
    
    void abre1()
    {
        p1 = 1;
    }
    void abre2()
    {
        p1 = 1;
    }
    void abre3()
    {
        p1 = 1;
    }
    
    void fecha1()
    {
        p1 = 0;
    }
    void fecha2()
    {
        p1 = 0;
    }
    void fecha3()
    {
        p1 = 0;
    }
    
    int portasAbertas()
    {
       return p1+p2+p3;
    }
    
    String getCor()
    {
       return cor;
    }
    void getPorta1()
    {
        System.out.println(p1);
    }
    void getPorta2()
    {
        System.out.println(p2);
    }
    void getPorta3()
    {
        System.out.println(p3);
    }
}