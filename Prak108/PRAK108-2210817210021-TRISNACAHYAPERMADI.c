#include <stdio.h>
int main ()
{
    float bp, jt, phi, jj, kl;
    phi= 3.14;
    bp= 5;
    jt= 14;
    printf ("Diketahui:\n");
    printf ("Pak Dengklek mengelilingi taman = %.0f Putaran\n", bp);
    printf ("jarak tempuh Pak Dengklek= %.0f jarak tempuh\n", jt);
    printf ("\njawaban :\n");
    kl= jt/bp;
    jj= kl/(phi*2);
    printf ("jari-jari taman yang dikelilingi Pak Dengklek adalah: %.2f kilometer", jj);
    return 0;
}