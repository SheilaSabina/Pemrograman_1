#include <stdio.h>

int main() {
    int detik;
    
    printf("Input\n");
    scanf("%d", &detik);

    if (detik < 0) {
        printf("\nOutput\n");
    } else {
        int jam, menit;
        
        jam = detik / 3600;
        detik %= 3600;
        
        menit = detik / 60;
        detik %= 60;
        
        if (jam >= 24) {
            int hari = jam / 24;
            jam %= 24;
            printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
        } else {
            printf("%02d:%02d:%02d\n", jam, menit, detik);
        }
    }

    return 0;
}
