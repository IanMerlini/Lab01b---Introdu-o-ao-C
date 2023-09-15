#include <stdio.h>
#include <string.h>

// Função para encontrar a posição de um caractere em uma string
int encontrarCaractere(const char *string, char caractere) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            return i;
        }
    }
    return -1; // Retorna -1 se o caractere não for encontrado na string
}

int main() {
    char string[100];
    char caractere;

    // Solicita ao usuário a entrada da string
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0'; // Remove a quebra de linha inserida pelo fgets

    // Solicita ao usuário o caractere a ser procurado
    printf("Digite o caractere a ser encontrado: ");
    scanf(" %c", &caractere);

    int posicao = encontrarCaractere(string, caractere);

    if (posicao != -1) {
        printf("O caractere '%c' foi encontrado na posição %d da string.\n", caractere, posicao);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", caractere);
    }

    return 0;
}