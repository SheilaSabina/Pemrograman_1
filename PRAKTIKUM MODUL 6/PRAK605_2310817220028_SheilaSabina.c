#include <stdio.h>

int main() {
    int s;

    printf("Input\n");
    scanf("%d", &s);

    int matrixA[s][s];
    int matrixB[s][s];
    int result[s][s];

    printf("Matriks A\n");
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Matriks B\n");
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            result[i][j] = 0;
            for (int k = 0; k < s; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("\nOutput\n");
    printf("Matriks AXB\n");
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}