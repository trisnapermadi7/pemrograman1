#include <stdio.h>
#include <conio.h>
int main (void)
{
    int x, y, hasil, hasil1;
    scanf ("%i", &x);
    scanf ("%i", &y);
    for (int i = 0; i < x; i++){
        for (int j = i; j>=0; j--){
            printf ("(%i * %i)" , j+1, y);
            if (j > 0){
                printf (" + ");
            }
        }
        hasil += (i+1) * y;
        printf (" = %i\n", hasil);
        hasil1 += hasil;
    }
    printf ("%i", hasil1);
}

