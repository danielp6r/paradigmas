#include <stdio.h>

int multsomarec(int n, int x) {

    if (n < 0 || x < 0)
        return (0);
    else if (x == 1)
        return (n);
    else
        return (n + multsomarec(x - 1, n));
}

int main() {
    
    int n;
    int x;
    printf("Digite um número. \n");
    scanf("%d", &n);
    printf("Digite o multiplicador. \n");
    scanf("%d", &x);

    int total;
    total = multsomarec(n, x);

    printf ("Total: %d\n", total);

    return 0;
}

