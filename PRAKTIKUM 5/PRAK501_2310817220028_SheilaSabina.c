#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d);

int main() {
    int a, b, c, d; 
    printf("Input\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int hasil = MaxBilangan(a, b, c, d);
    printf("\nOutput\n");
    printf("%d", hasil); 
    return 0;
}

int MaxBilangan(int a, int b, int c, int d) {
    int maksimum = a;

    if (b > maksimum) {
        maksimum = b;
    }

    if (c > maksimum) {
        maksimum = c;
    }

    if (d > maksimum) {
        maksimum = d;
    }

    return maksimum;
}