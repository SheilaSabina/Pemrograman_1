#include <stdio.h>

int main() {
    int angka;

    printf("Input\n");
    scanf("%d", &angka);

    if (angka >= 80 && angka <= 100) {
        printf("\nOutput\nA");
    } else if (angka >= 70 && angka <= 79) {
        printf("\nOutput\nB");
    } else if (angka >= 60 && angka <= 69) {
        printf("\nOutput\nC");
    } else if (angka >= 50 && angka <= 59) {
        printf("\nOutput\nD");
    } else {
       printf("\nOutput\nE");
    }

    return 0;
}
