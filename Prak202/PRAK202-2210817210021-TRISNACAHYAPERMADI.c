#include <stdio.h>
int main ()
{
    float nilai_pertama, nilai_kedua, hasil;
    printf ("Masukkan Nilai Pertama :");
    scanf ("%f", &nilai_pertama);
    printf ("Masukkan NIlai Kedua   :");
    scanf ("%f", &nilai_kedua);
    hasil= nilai_pertama+nilai_kedua;
    printf ("Hasil dari penjumlahan nilai pertama %.2f dan nilai kedua %.1f adalah %.2f", nilai_pertama, nilai_kedua, hasil);
    return 0;
}
