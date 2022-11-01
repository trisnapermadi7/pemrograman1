#include <stdio.h>
int main (void)
{
    int a, b, x, y;
    scanf ("%i %i", &a, &b);
    if (a > b) {
        for (x = a, y = b; x >= b, y <= a; x--, y++){
            printf ("%i %i", x, y);
            if (x == b){
                break ;
            }
            else {
                printf (" - "); 
            }
        }
    }
    else {
        for (x = a, y = b; x <=b, y >= a; x++, y--){
            printf ("%i %i", x, y);
            if (x == b){
                break ;
            }
            else {
                printf (" - ");
            }    
        }
    }
}
