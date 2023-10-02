#include <stdio.h>

void main () {
    float a = 4;
    float b = 8;
    float c = 3;
    float TOTAL = a*b/c;

    printf("Variabel a bernilai %1.f\n", a);
    printf("Variabel b bernilai %1.f\n", b);
    printf("Variabel c bernilai %1.f\n", c);
    printf("Hasil dari a dikali b dibagi c adalah %6f", TOTAL);
}