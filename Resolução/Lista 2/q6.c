#include <stdio.h>

int main() {
    int numero1, numero2;
    int divisor1 = 0;
    int divisor2 = 0;
    
    printf("Digite o primeiro número. \n");
    scanf("%d", &numero1);
    printf("Digite o segundo número. \n");
    scanf("%d", &numero2);

    for (int i = 1 ; i <= numero1/2 ; i++) {
        if (numero1 % i == 0) divisor1 += i;
    }
for (int i = 1; i <= numero2/2; i++) {
        if (numero2 % i == 0) divisor2 += i;   
    }
    
if (numero1 == divisor2 && numero2 == divisor1)
    printf("Os números %i e %i são amigos. \n", numero1, numero2);
else 
    printf ("Os números %i e %i não são amigos. \n ", numero1, numero2);


    return 0;
}
