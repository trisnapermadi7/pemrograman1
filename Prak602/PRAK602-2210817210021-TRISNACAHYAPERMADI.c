#include <stdio.h>
int main (void)
{
    int baris, x, isi;
    scanf ("%i", &baris);
    int angka[baris];
    for (x = 0; x < baris; x++){
        scanf ("%i", &isi);
        angka[x] = isi;
    }
    for (x = 0; x < baris; x++){
        printf ("%i ", angka[x] * (x + 1));
    }
    return 0;
}