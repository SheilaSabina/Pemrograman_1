#include <stdio.h>
#include <math.h>

int mutlak(int angka) {
    if (angka < 0){
        angka = -angka;
    }
    return angka;
    
}
int hitung(int nilai1, int nilai2) {
    int Hasil = nilai1-nilai2;
    return mutlak(Hasil);
}

int main() {
    int a, b, c, d, Hasil;

    printf("Input\n");
    scanf("%d %d %d %d", &a, &c, &b, &d);

    Hasil = hitung(a, b) + hitung(c, d);
    printf("\nOutput\n");
    printf("%d", mutlak(Hasil));

    return 0;
}