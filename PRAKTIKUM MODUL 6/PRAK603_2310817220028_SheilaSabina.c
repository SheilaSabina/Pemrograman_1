#include <stdio.h>

void guru(int a, int b, int kalia[a], int kalib[b]) { 
    for (int i = 0; i < a; i++) {
        printf("%d ", kalia[i] * kalib[i]);
    }
    printf("\n");
}

int main() {
    int a, b;

    printf("Input\n");
    scanf("%d %d", &a, &b);

    if (a != b) {
        printf("\nJumlah tidak sama \n");
        return 0;
    }

    int kalia[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &kalia[i]);
    }

    int kalib[b];
        for (int j = 0; j < b; j++) {
            scanf("%d", &kalib[j]);
        }

        printf("\nOutput\n");
        guru(a, b, kalia, kalib);

    return 0;
}