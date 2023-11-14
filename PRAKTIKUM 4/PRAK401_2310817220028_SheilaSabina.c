#include <stdio.h>

void main() {
    int angka;
    char hasil;

    printf("Input\n");
    scanf("%d", &angka);

    printf("\nOutput\n");
    scanf(" %c", &hasil); 

    for (int i = 1; i <= 50; i++) {
        if (i % angka == 0) {
            printf("%c ", hasil);
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");
}