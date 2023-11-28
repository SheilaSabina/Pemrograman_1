#include <stdio.h>

int maksimal(int a, int b) {
    // Fungsi maksimal mengembalikan nilai maksimum dari dua bilangan
    return (a > b) ? a : b;
}

int minimal(int a, int b) {
    // Fungsi minimal mengembalikan nilai minimum dari dua bilangan
    return (a < b) ? a : b;
}

int main() {
    int batas = 0;
    int maks = -100000;
    int minim = 100000;
    int bilangan;

    printf("Input\n");
    scanf("%d", &bilangan);

    while (batas < bilangan) {
        int nilai;
        scanf("%d", &nilai);
        maks = maksimal(maks, nilai);
        minim = minimal(minim, nilai);
        batas++;
    }

   printf("\nOutput\n");
    printf("%d %d", maks, minim);

    return 0;
}
