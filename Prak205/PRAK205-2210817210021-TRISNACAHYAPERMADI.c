#include <stdio.h>
#include <math.h>
int main ()
{
    int A, B, C, keliling, tinggi, luas, hasil;
    printf ("Sisi Tinggi    = ");
    scanf ("%d", &A);
    printf ("Sisi Miring    = ");
    scanf ("%d", &B);
    C= sqrt(pow((B), 2) - pow((A), 2) );
    keliling= A+B+C;
    luas = (C*A)/2;
    printf ("Alas           = %d cm\n", C);
    printf ("Tinggi         = %d cm\n", A);
    printf ("Keliling       = %d cm\n", keliling);
    printf ("Luas           = %d cm^2\n", luas);
    return 0;
}