#include <stdio.h>
#include <conio.h>

int main ()
{
    int A,B,C;

    printf("Silahkan Masukkan Nilai Pertama = "); scanf("%i",&A);
    printf("Silahkan Masukkan Nilai Kedua   = "); scanf("%i",&B);
    printf("Silahkan Masukkan Nilai Ketiga  = "); scanf("%i",&C);

    if (A < B && A < C)
        printf("Maka Nilai Terkecil Adalah = %i", A);
    else if (B < A && B < C)
        printf("Maka Nilai Terkecil Adalah = %i", B);
    else
        printf("Maka Nilai Terkecil Adalah = %i", C);
    return 0;

}
