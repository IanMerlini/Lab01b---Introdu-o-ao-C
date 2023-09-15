#include <stdio.h>
#include <string.h>

int main() {
    char nome1[100], nome2[100];

    // Solicita os nomes ao usuário
    printf("Digite o primeiro nome: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite o segundo nome: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // Remove a quebra de linha

    // Compara os nomes e imprime em ordem alfabética
    if (strcmp(nome1, nome2) < 0) {
        printf("Nomes em ordem alfabética: %s, %s\n", nome1, nome2);
    } else if (strcmp(nome1, nome2) > 0) {
        printf("Nomes em ordem alfabética: %s, %s\n", nome2, nome1);
    } else {
        printf("Os nomes são iguais: %s\n", nome1);
    }

    return 0;
}
