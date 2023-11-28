#include <stdio.h>
int reverse(int num) {

    int number = 0;
    while (num > 0) {
        number = number * 10 + num % 10;
        num /= 10;
    }
    return number;
}

int main() {
    int A, B;
    
    printf("Input\n");
    scanf("%d %d", &A, &B);
    
    A = reverse(A);
    B = reverse(B);
    
    int C = A + B;
    int result = reverse(C);
    
    printf("\nOutput\n");
    printf("%d", result);

    return 0;
}