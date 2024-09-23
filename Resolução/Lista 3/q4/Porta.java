package q4;
class Porta
{
    boolean aberta;
    String cor;
    int x, y, z;
    
    void abre()
    {
        aberta = true;
    }
    void fecha()
    {
        aberta = false;
    }
    void pinta(String cor)
    {
        this.cor = cor;
    }
    void estaAberta()
    {
        if ( aberta == true )
            System.out.println("y");
        else
            System.out.println("n");
    }
}