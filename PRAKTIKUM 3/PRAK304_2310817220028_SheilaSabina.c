#include <stdio.h>

int main() {
    int angka;
    
    printf("Input\n");
    scanf("%d", &angka);

    if (angka < 0 || angka >= 100) {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    } else if (angka == 0) {
        printf("Nol\n");
    } else {
        int satuan = angka % 10;
        int puluhan = angka / 10;

        if (puluhan > 1) {
            
            printf("Puluhan");
            if (satuan > 0) {
                printf(" %d", satuan);
            }
        } else if (puluhan == 1) {
            
            if (satuan == 1) {
                printf("Sebelas");
            } else if (satuan == 0) {
                printf("Sepuluh");
            } else {
                printf("Belasan");
            }
        } else {

            if (satuan == 1) {
                printf("Satuan");
            } else {
                printf("Satuan");
            }
        }
        printf("\n");
    }

    return 0;
}
