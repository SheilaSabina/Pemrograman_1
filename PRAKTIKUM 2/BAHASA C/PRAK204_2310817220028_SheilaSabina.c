#include <stdio.h>
#include <math.h>

#define phi 3.142857

 void main(){
   double A, B;

   printf("Input\n");
   scanf("%lf %lf", &A, &B);

   double volume = phi * pow(A, 2) * B;
   double luas = 2 * phi * A * (A + B);
   double keliling = 2 * phi * A;

   printf("\nOutput\n");
   printf("Volume = %.2lf\n", volume);
   printf("Luas = %.2lf\n", luas);
   printf("Keliling = %.2lf", keliling);
 }