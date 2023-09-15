#include <stdio.h>

// Função para ler a matriz do teclado
void lerMatriz(int matriz[][100], int linhas, int colunas) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int matriz[][100], int linhas, int colunas) {
    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas, escolha;
    
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);
    
    int matriz[100][100];
    
    lerMatriz(matriz, linhas, colunas);
    
    printf("Escolha uma operação:\n");
    printf("1. Multiplicar uma linha\n");
    printf("2. Multiplicar uma coluna\n");
    
    scanf("%d", &escolha);
    
    int numero, linha, coluna;
    
    switch (escolha) {
        case 1:
            printf("Digite o número da linha que deseja multiplicar: ");
            scanf("%d", &linha);
            printf("Digite o número pelo qual deseja multiplicar a linha: ");
            scanf("%d", &numero);
            for (int j = 0; j < colunas; j++) {
                matriz[linha - 1][j] *= numero;
            }
            break;
        case 2:
            printf("Digite o número da coluna que deseja multiplicar: ");
            scanf("%d", &coluna);
            printf("Digite o número pelo qual deseja multiplicar a coluna: ");
            scanf("%d", &numero);
            for (int i = 0; i < linhas; i++) {
                matriz[i][coluna - 1] *= numero;
            }
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }
    
    imprimirMatriz(matriz, linhas, colunas);
    
    return 0;
}
