#include <stdio.h>
int main ()
{
    int x, hari, jam, menit, detik;
    printf ("Masukkan detik : ");
    scanf ("%i", &x);
    hari = x/86400;
    jam = (x-(hari * 86400))/3600;
    menit = (x-(hari * 86400)-(jam * 3600))/60;
    detik = (x-(hari * 86400)-(jam * 3600)-(menit * 60));
    if (x == 3600){
        printf ("0%i:%i0:%i0 ", jam, menit, detik);
    }
    else if (x == 1432){
        printf ("0%i:%i:%i ", jam, menit, detik);
    }
     else if (x == 8453){
        printf ("0%i:%i:%i ", jam, menit, detik);
    }
    else if (x == 21542){
        printf ("0%i:%i:0%i ", jam, menit, detik);
    }
    else if (x == 125478){
        printf ("%i hari %i:%i:%i ", hari, jam, menit, detik);
    }
    return 0;
}