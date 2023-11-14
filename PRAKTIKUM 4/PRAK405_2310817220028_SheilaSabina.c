#include <stdio.h>

int main() {
    int s, e, l, a, angka = 0;

    printf("Input\n");
    scanf("%d %d", &s, &e);

    for (l = 1; l <= s; l++) {
        int row_angka = 0;
        for (a = 1; a <= l; a++) {
            int result = a * e;
            printf("(%d * %d) = %d", a, e, result);
            if (a != l) {
                printf(" + ");
            }
            row_angka += result;
        }
        printf(" = %d\n", row_angka);
        angka += row_angka;
    }

    printf("%d", angka);

    return 0;
}