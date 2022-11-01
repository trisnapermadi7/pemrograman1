#include <stdio.h>
#include <conio.h>
int main (void)
{
    int i;
    float x, y;
    while (i != 5){
        printf ("Pilih program :\n");
        printf ("1. Penjumlahan\n");
        printf ("2. Pengurangan\n");
        printf ("3. Perkalian\n");
        printf ("4. Pembagian\n");
        printf ("5. Exit\n");
        printf ("Masukkan pilihan : ");
        scanf ("%d", &i);
        if ( i > 5 || i <= 0){
            printf ("Input anda salah, silahkan coba lagi\n\n");
        }
        else if (i == 5){
            break;
        }
        else {
            printf ("Masukkan nilai pertama : "); 
            scanf ("%f", &x);
            printf ("Masukkan nilai kedua : "); 
            scanf ("%f", &y);
            if (i == 1){
                printf ("Hasil pertambahan antara %.2f dengan %.2f adalah %.2f\n\n", x, y, x + y);
            }
            else if (i == 2){
                printf ("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", x, y, x - y);
            }
            else if (i == 3){
                printf ("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", x, y, x * y);
            }
            else {
                printf ("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", x, y, x / y);
            }
        }
    }
    printf ("Terimakasih, telah menggunakan kalkulator Trisna Cahya Permadi");
}




