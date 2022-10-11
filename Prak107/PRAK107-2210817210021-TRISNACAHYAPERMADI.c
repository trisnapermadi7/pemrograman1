#include <stdio.h>
int main()
{
    int x, y, z, k, ht, b;
    x= 4; 
    y= 5;
    z= 7;
    k= x+y+z;
    ht= 85000;
    b= ht*k;
    printf ("Diketahui: ");
    printf ("Panjang sisi segitiga berturut-turut adalah %d,%d, dan %d\n", x, y, z);
    printf ("Keliling tanah Pak Dengklek adalah %d\n", k);
    printf ("Harga tanah Per Meter adalah %d\n", ht);
    printf ("\nJawaban:\n");
    printf ("Biaya yang diperlukan Pak Dengklek adalah: Rp %d", b);
    return 0;
}