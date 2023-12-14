#include <stdio.h>

int main() {
    int ruangan6;

    printf("Input\n");
    scanf("%d", &ruangan6);

    int zetsuputih[ruangan6];

    for (int i = 0; i < ruangan6; i++) {
        scanf("%d", &zetsuputih[i]);
    }

    for (int i = 0; i < ruangan6; i++) {
        zetsuputih[i] *= (i + 1);
    }

    printf("\nOutput\n");
    for (int i = 0; i < ruangan6; i++) {
        printf("%d ", zetsuputih[i]);
    }

    return 0;
}