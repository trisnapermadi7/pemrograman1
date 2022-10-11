#include <stdio.h>
int main ()
{
    int a, b, A, B;
    a=400000;
    b=350000;
    printf ("\nHarga sepatu A adalah: %d", a);
    printf ("\nHarga sepatu B adalah: %d", b);
    A= (a-(a*13/100));
    B= (b-(b*21/100));
    printf ("\nSepatu A mendapat diskon 13%% sehingga harganya menjadi: %d", A);
    printf ("\nSepatu B mendapat diskon 21%% sehingga harganya menjadi: %d", B);
    return 0;
}