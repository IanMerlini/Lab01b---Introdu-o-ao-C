#include <stdio.h>
#include <string.h>

void removerCaractere(char str[], int posicao) {
    int tamanho = strlen(str);

    if (posicao >= 0 && posicao < tamanho) {
        for (int i = posicao; i < tamanho - 1; i++) {
            str[i] = str[i + 1];
        }
        str[tamanho - 1] = '\0';
    }
}

int main() {
    char Str[100];
    int posicao;

    // Solicita ao usuário a entrada da string
    printf("Digite uma string: ");
    fgets(Str, sizeof(Str), stdin);
    Str[strcspn(Str, "\n")] = '\0'; // Remove a quebra de linha inserida pelo fgets

    // Solicita ao usuário a posição do caractere a ser removido
    printf("Digite a posição do caractere a ser removido: ");
    scanf("%d", &posicao);

    removerCaractere(Str, posicao);

    printf("String após a remoção: %s\n", Str);

    return 0;
}