#include <stdio.h>
int main(void)
{
    int a, z, matriks, kolom, baris;
    scanf ("%i %i", &baris, &kolom);
    int angka[baris][kolom];
    for (a = 0; a < baris; a++){
        for (z = 0; z < kolom; z++){
            scanf ("%i", &matriks);
            angka [a][z] = matriks;
        }
    } 
    for (a = 0; a < baris; a++){
        for (z = 0; z < kolom; z++){
            printf ("%i ", angka[a][z]);
        }
    printf ("\n");
    }
    return 0;
}