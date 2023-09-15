#include <stdio.h>

// Função para multiplicar uma linha da matriz por um número
void multiplicarLinha(int matriz[][100], int colunas, int linha, int multiplicador) {
    for (int j = 0; j < colunas; j++) {
        matriz[linha][j] = multiplicador;
    }
}

// Função para multiplicar uma coluna da matriz por um número
void multiplicarColuna(int matriz[][100], int linhas, int coluna, int multiplicador) {
    for (int i = 0; i < linhas; i++) {
        matriz[i][coluna]= multiplicador;
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

    // Multiplica a linha 1 da matriz por 2
    int linhaParaMultiplicar = 1;
    int multiplicadorLinha = 2;
    multiplicarLinha(matriz, colunas, linhaParaMultiplicar, multiplicadorLinha);

    // Multiplica a coluna 0 da matriz por 3
    int colunaParaMultiplicar = 0;
    int multiplicadorColuna = 3;
    multiplicarColuna(matriz, linhas, colunaParaMultiplicar, multiplicadorColuna);

    // Imprime a matriz resultante
    printf("Matriz Resultante:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}