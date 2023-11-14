#include <stdio.h>

void main() {
    int angka;

    printf("Input\n");
    scanf("%d", &angka);

    printf("\nOutput\n");
    for (int i = 1; i <= angka; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    for (int i = angka; i >= 2; i -= 2) {
        printf("%d ", i);
    }

    printf("\n");
}