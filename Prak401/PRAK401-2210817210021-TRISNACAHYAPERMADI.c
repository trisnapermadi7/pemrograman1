#include <stdio.h>
int main (void)
{
    int a, i;
    char s;
    scanf ("%d %c", &a, &s);
    for (i= 1; i<=50; i++){
        if  (i % a == 0){
            printf ("%c ", s);
        }
        else {
        printf ("%i ", i);
        }
    }
}