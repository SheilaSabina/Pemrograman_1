#include <stdio.h>

void main (){
    
    int a = 4;
    int b = 8;
    int c = 3;
    
    int d = a ==b;
    int e = b > c;
    int f = a != c;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", d);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", e);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", f);
    
}