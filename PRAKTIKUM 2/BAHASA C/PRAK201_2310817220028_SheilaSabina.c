#include <stdio.h>
void main (){
    char nama [50];
    char nim [50];
    char paralel [50];
    char ttl [50];
    char alamat [50];
    char hobby [50];
    char hp [50];

    printf("Nama                     :");
    gets(nama);
    printf("NIM                      :");
    gets(nim);
    printf("Kelas Paralel            :");
    gets(paralel);
    printf("Tempat/Tanggal Lahir     :");
    gets(ttl);
    printf("Alamat                   :");
    gets(alamat);
    printf("Hobby                    :");
    gets(hobby);
    printf("No.HP                    :");
    gets(hp);

    printf("\n\nNama                     :%s\n", nama);
    printf("NIM                      :%s\n", nim);
    printf("Kelas Paralel            :%s\n", paralel);
    printf("Tempat/Tanggal Lahir     :%s\n", ttl);
    printf("Alamat                   :%s\n", alamat);
    printf("Hobby                    :%s\n", hobby);
    printf("No.HP                    :%s\n", hp);
}