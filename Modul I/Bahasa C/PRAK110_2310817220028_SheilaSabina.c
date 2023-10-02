#include <stdio.h>

void main(){
    int x = 5;
    int y = 12;
    int z = pow (y,2) + pow (x,2);
    int a = sqrt(z);
    int b = (x+y+a);
    int c = (x*y)/2;

    printf("Diketahui:\n");
    printf("Alas = %d cm\n", x);
    printf("Tinggi = %d cm\n\n", y);

    printf("Jawab:\n");
    printf("Sisi A = %d cm\n", y);
    printf("Sisi B = %d cm\n", a);
    printf("Sisi C = %d cm\n", x);
    printf("Keliling = %d cm\n", b);
    printf("Luas =  %d cm\n", c);
}