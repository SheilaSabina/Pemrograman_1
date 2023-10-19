#include <stdio.h>
#include <math.h>

void main(){
    float a, b, c, keliling, luas;

    printf("Input\n");
    scanf("%f %f", &a, &b);

    c = sqrt(pow(b, 2) - pow(a, 2));
    keliling = a + b + c;
    luas = a * c / 2;

    printf("\nOutput\n");
    printf("Alas = %.0f cm\n", c);
    printf("Tinggi = %.0f cm\n", a);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2", luas);

}