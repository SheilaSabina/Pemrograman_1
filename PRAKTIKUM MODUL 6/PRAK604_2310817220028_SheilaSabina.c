#include <stdio.h>
#include <string.h>

void eve(char code[], char pesan1[]) {
    for (int i = 0; i < strlen(code); i++) {
        if (code[i] == ' ' && pesan1[i] == ' ') {
            pesan1[i] = ' ';
        } else if (code[i] == pesan1[i]) {
            pesan1[i] = '*';
        } else {
            pesan1[i] = '#';
        }
    }
}

int main() {
    char code[200], pesan1[200];

    printf("Input\n");
    gets(code);
    code[strcspn(code, "\n")] = '\0';
    gets(pesan1);
    pesan1[strcspn(pesan1, "\n")] = '\0';

    printf("\nOutput");
    if(strlen(code) != strlen(pesan1)) {
        printf("\nPanjang kalimat berbeda, pesan palsu \n");
        return 0;
    }

    eve(code, pesan1);

    int bintang = 0, pagar = 0;

    for(int i = 0; i < strlen(code); i++) {
        if(pesan1[i] == '*') {
            bintang++;
        } else if(pesan1[i] == '#') {
            pagar++;
        }
    }

    printf("\n");
    printf("%s\n",pesan1);
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);

    if (bintang >= pagar) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }

    return 0;
}