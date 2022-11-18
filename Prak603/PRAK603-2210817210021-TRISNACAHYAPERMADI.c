#include <stdio.h>
int main(void)
{
    int x, isi, baris1, baris2, hasil;
    scanf ("%i %i", &baris1, &baris2);
    int bil1[baris1], bil2[baris2];
    if (baris1 == baris2){
        for (x = 0; x < baris1; x++){
            scanf ("%i", &isi);
            bil1[x] = isi;     
        }
        for (x = 0; x < baris2; x++){
            scanf ("%i", &isi);
            bil2[x] = isi;     
        }
        for (x = 0; x < baris1; x++){
            hasil = bil1[x] * bil2[x];
            printf ("%i ", hasil);     
        }
    }
    else {
        printf ("jumlah tidak sama");
    }
}