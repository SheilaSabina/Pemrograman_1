#include <stdio.h>

void createMatrix(int rows, int cols, int nilai[], int matriks[rows][cols]) {
    int indeks = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matriks[i][j] = nilai[indeks];
            indeks++;
        }
    }
}

void printMatrix(int rows, int cols, int matriks[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Input\n");
    scanf("%d %d", &rows, &cols);

    int nilaimatriks[rows * cols];

    for (int i = 0; i < rows * cols; i++) {
        scanf("%d", &nilaimatriks[i]);
    }

    int matriks[rows][cols];
    createMatrix(rows, cols, nilaimatriks, matriks);

    printf("\nOutput\n");
    printMatrix(rows, cols, matriks);

    return 0;
}