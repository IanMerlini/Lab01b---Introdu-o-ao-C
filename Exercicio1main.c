#include <stdio.h>

int main() {
    int n;
    
    // Solicita o tamanho da matriz ao usuário
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);
    
    // Declara a matriz
    int matriz[n][n];
    
    // Pede ao usuário para preencher a matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Inicializa as variáveis para encontrar o mínimo
    int menor = matriz[0][0];
    int linhaMenor = 0;
    
    // Encontra o menor valor e sua linha
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linhaMenor = i;
            }
        }
    }
    
    // Imprime a linha com o menor valor
    printf("A linha com o menor valor (%d) é a linha %d.\n", menor, linhaMenor + 1);
    
    return 0;
}
