#include <stdio.h>
int main ()
{
    float jari_jari, tinggi, phi, luas, keliling, volume;
    printf ("masukkan Jari-jari = ");
    scanf ("%f", &jari_jari);
    printf ("masukkan tinggi    = ");
    scanf ("%f", &tinggi);
    volume= 22*jari_jari*jari_jari*tinggi/7;
    luas= 2*22*jari_jari*(jari_jari+tinggi)/7;
    keliling= 2*22*jari_jari/7;
    printf ("Volume             = %.2f\n", volume);
    printf ("Luas               = %.2f\n", luas);
    printf ("Keliling           = %.2f\n", keliling);
    return 0;
}

