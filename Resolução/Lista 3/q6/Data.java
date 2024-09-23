package q6;

class Data
{
  int dia,mes,ano;
  
  Data(int dia, int mes, int ano)
  {
    if (this.dia >= 0 || this.mes >= 0 || this.ano >= 0)
    {
      this.dia = dia; this.mes = mes; this.ano = ano;
    }
    else
        System.out.println("ivalid date\n");
  }
  
  void proxDia() { dia++; }
  
  void printDate()
  {
    System.out.println(dia + "/" + mes + "/" + ano + "\n");
  }
  
}