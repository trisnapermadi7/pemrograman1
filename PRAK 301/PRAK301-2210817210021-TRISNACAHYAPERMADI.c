#include <stdio.h>
int main ()
{
    int x, y, z, pertama, kedua, ketiga;
    printf ("");
    scanf ("%i", &x);
    printf ("");
    scanf ("%i", &y);
    printf ("");
    scanf ("%i", &z);
    if (x<y){
        if ( y<z){
        pertama= x;
        kedua  = y;
        ketiga = z;
    }
    else{
        if (x<z){
        pertama =x;
        kedua   =y;
        ketiga  =z;
        }
        else{
        pertama =z;
        kedua   =x;
        ketiga  =y;
        }
        }
    }
    else{
        if (y<z){
            if (x<z){
            pertama =y;
            kedua   =x;
            ketiga  =z;
            }else {
            pertama = y;
            kedua   = z;
            ketiga  = x;
            }
        }
        else{
            if (z<x){
                if (x<y){
                    pertama = z;
                    kedua   = x;
                    ketiga  = y;
                }
                else{
                    pertama =z;
                    kedua   =y;
                    ketiga  =x;
                }
            }
        }
    }
    printf ("%i %i %i", pertama, kedua, ketiga);
    return 0;
}  