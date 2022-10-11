#include <stdio.h>
int main ()
{
    float a= 9, b=6, x= 10, y= 7, hasil;
    printf ("variabel a: %.f\n",a);
    printf ("variabel b: %.f\n",b);
    printf ("variabel x: %.f\n",x);
    printf ("variabel y: %.f\n",y);
    hasil = (a+b)*x/y;
    printf ("jumlah variabel tersebut adalah: %.2f", hasil);
    return 0;
}