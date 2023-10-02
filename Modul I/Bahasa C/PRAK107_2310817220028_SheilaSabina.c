#include <stdio.h>

void main(){
    int a = 4;
    int b = 5;
    int c = 7;
    int d = 85000;
    int e = a+b+c;
    int f = e*d;

    printf("Diketahui: \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", e);
    printf("Harga tanah Per Meter adalah %d\n", d);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", f);
}