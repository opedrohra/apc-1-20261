#include <stdio.h>

int main() {
    int n;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: Nao existe fatorial de numero negativo.\n");
    } else {
        // Estrutura FOR
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d eh: %llu\n", n, fatorial);
    }

    return 0;
}