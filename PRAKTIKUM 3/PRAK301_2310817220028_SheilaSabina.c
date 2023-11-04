#include <stdio.h>
void main(){
    int satu, dua;
    printf("Input\n");
    scanf("%d %d", &satu, &dua);

    if (satu > dua) {
        printf("\nOutput \n%d %d", dua, satu);
    } else {
        printf("\nOutput \n%d %d", satu, dua);
    }
}