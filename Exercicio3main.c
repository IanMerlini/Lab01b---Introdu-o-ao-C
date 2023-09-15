#include <stdio.h>

int main() {
    int maxNumero;

    // Solicita ao usuário o número máximo ímpar
    do {
        printf("Digite o número máximo (ímpar): ");
        scanf("%d", &maxNumero);
    } while (maxNumero % 2 == 0); // Garante que o número seja ímpar

    int meio = maxNumero / 2;
    int i, j, k;

    // Loop para imprimir as linhas
    for (i = 1; i <= meio + 1; i++) {
        // Espaços iniciais
        for (j = 1; j < i; j++) {
            printf("   ");
        }

        // Números crescentes
        for (k = i; k <= maxNumero - i + 1; k++) {
            printf("%2d ", k);
        }

        printf("\n");
    }

    return 0;
}
