#include <stdio.h>

void main(){
    float a = 5;
    float b = 14;
    float c = b/a;
    float d = c/(2*3.14);

    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %1.f putaran\n", a);
    printf("Jarak tempuh Pak Dengklek = %1.f kilometer\n\n", b);
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f kilometer\n", d);
}