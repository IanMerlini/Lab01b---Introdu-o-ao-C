#include <stdio.h>
#include <stdlib.h> // Para a função abs()

// Função para substituir números negativos pelo seu módulo em uma matriz
void substituirNegativosPorModulo(int matriz[][100], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] < 0) {
                matriz[i][j] = abs(matriz[i][j]); // Usamos a função abs() para calcular o módulo
            }
        }
    }
}

int main() {
    int linhas, colunas;
    
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);
    
    int matriz[100][100];
    
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    substituirNegativosPorModulo(matriz, linhas, colunas);
    
    printf("Matriz após substituição dos negativos pelo módulo:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
