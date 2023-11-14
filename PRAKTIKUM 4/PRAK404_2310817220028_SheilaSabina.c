#include <stdio.h>

int main() {
    int angka;
    float angka1, angka2, hasil;

    do {
        printf("\nInput\n");
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan :");
        scanf("%d", &angka);

        if (angka >= 1 && angka <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &angka1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &angka2);

            switch (angka) {
                case 1:
                    hasil = angka1 + angka2;
                    printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil);
                    break;
                case 2:
                    hasil = angka1 - angka2;
                    printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil);
                    break;
                case 3:
                    hasil = angka1 * angka2;
                    printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil);
                    break;
                case 4:
                    if (angka2 != 0) {
                        hasil = angka1 / angka2;
                        printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil);
                    } else {
                        printf("Error! Pembagian dengan nol tidak diperbolehkan.\n");
                    }
                    break;
            }
        } else if (angka == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Sheila Sabina\n");
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }

    } while (angka != 5);

    return 0;
}