#include <stdio.h>
#include <math.h>
int main ()
{
    int A, B, C, t, keliling,luas;
    A= 5;
    t= 12;
    printf ("diketahui:\n");
    printf ("alas= %d cm\n", A );
    printf ("tinggi=  %d cm\n", t);
    printf ("\nJawab: \n");
    C=(sqrt(A*A+t*t));
    printf ("sisi A= %d cm\n", t);
    printf ("sisi B= %d cm\n", C);
    printf ("sisi C= %d cm\n", A);
    keliling= (A+C+t);
    luas= (0.5*A*t);
    printf ("keliling= %d cm", keliling);
    printf ("\nluas= %d cm", luas);
    return 0;
}