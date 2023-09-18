#include <stdio.h>

void main () {
    char nama [25] = "Sheila Sabina";
    char nim [25] = "2310817220028";

    printf("###############################\n");
    printf("#                             #\n");
    printf("#      %s          #\n", &nama);
    printf("#      %s          #\n",   &nim);
    printf("#                             #\n");
    printf("###############################\n");
}