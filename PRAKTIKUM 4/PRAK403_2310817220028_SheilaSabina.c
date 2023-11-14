#include <stdio.h>
int main () {
    int satu, dua;

    printf("Input\n");
    scanf("%d %d", &satu, &dua);
    
    printf("\nOutput\n");
    if(satu < dua){
        for (int i = satu; i <= dua; i++){
            printf("%d %d", i, satu + dua - i);
            if (i < dua){
                printf("-");
            }
        }
    } else if (satu > dua){
        for (int i = satu; i >= dua; i--){
            printf("%d %d", i, satu + dua - i);
            if (i > dua){
                printf("-");
            }
        }
    } else {
        printf("%d %d", satu, dua);
    }
    return 0;
}