#include <stdio.h>

void Biodata(int tahunLahir, char nama[], char asal[]) {
    int tahun_sekarang = 2023;
    int umur = tahun_sekarang - tahunLahir;

    printf("Perkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya dari : %s\n", asal);
}

int main() {
    int tahunLahir;
    char Namaku[20], Asal[15];

    printf("Input\n");
    scanf("%d", &tahunLahir);
    scanf(" %[^\n]%*c", Namaku);
    scanf(" %[^\n]%*c", Asal);

    printf("\nOutput\n");
    Biodata(tahunLahir, Namaku, Asal);

    return 0;
}