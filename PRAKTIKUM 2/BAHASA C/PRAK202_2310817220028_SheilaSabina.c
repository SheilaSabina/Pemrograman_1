#include <stdio.h>
void main (){
    float nilai_pertama, nilai_kedua;
    printf("Input\n");
    printf("Masukkan Nilai Pertama :");
    scanf("%f", &nilai_pertama);
    printf("Masukkan Nilai Kedua :");
    scanf("%f", &nilai_kedua);

    float hasil = nilai_pertama + nilai_kedua;
    printf("\nOutput");
    printf("\nHasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", nilai_pertama, nilai_kedua, hasil);

}