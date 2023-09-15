#include <stdio.h>

// Função para somar os elementos das linhas L1 e L2 e colocar o resultado na linha L2
void somarLinhas(int matriz[][100], int colunas, int linha1, int linha2) {
    for (int j = 0; j < colunas; j++) {
        matriz[linha2][j] += matriz[linha1][j];
    }
}

// Função para multiplicar os elementos das linhas L1 e L2 e colocar o resultado na linha L2
void multiplicarLinhas(int matriz[][100], int colunas, int linha1, int linha2) {
    for (int j = 0; j < colunas; j++) {
        matriz[linha2][j] *= matriz[linha1][j];
    }
}

int main() {
    int matriz[100][100];
    int linhas, colunas;

    // Solicita ao usuário o número de linhas e colunas da matriz
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    // Lê a matriz do usuário
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Escolha as linhas para somar e multiplicar
    int linha1, linha2;
    printf("Digite o número da primeira linha (L1): ");
    scanf("%d", &linha1);
    printf("Digite o número da segunda linha (L2): ");
    scanf("%d", &linha2);

    if (linha1 < 0 || linha1 >= linhas || linha2 < 0 || linha2 >= linhas) {
        printf("Linhas fora dos limites da matriz.\n");
        return 1;
    }

    // Somar as linhas L1 e L2 e colocar o resultado em L2
    somarLinhas(matriz, colunas, linha1, linha2);

    // Imprime a matriz resultante após a soma
    printf("Matriz Resultante após a soma:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Multiplicar as linhas L1 e L2 e colocar o resultado em L2
    multiplicarLinhas(matriz, colunas, linha1, linha2);

    // Imprime a matriz resultante após a multiplicação
    printf("Matriz Resultante após a multiplicação:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}