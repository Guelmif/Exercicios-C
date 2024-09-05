#include <stdio.h>

int main() {
    int soma = 0;
    int numero;

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numero);
        soma += numero;
    }

    printf("A soma dos 10 números digitados é: %d\n", soma);

    return 0;
}
