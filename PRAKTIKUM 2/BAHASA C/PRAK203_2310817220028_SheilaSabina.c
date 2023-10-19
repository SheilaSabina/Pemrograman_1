#include <stdio.h>
void main (){
    float a, b, i, j, x, y;

    printf("Input\n");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    float hasil = (float) (a-b) * i/j - (x+y);
    printf("\nOutput");
    printf("\n%.3f", hasil);
}