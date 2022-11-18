#include <stdio.h>
#include <string.h>
int main()
{
    char Kode[100],Pesan[100];
    int i,j;
    scanf("%[^\n]%*c",&Kode);
    scanf("%[^\n]%*c",&Pesan);
    int Pkode=strlen(Kode),Ppesan=strlen(Pesan);
    if(Pkode!=Ppesan){
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    else{
        int i=0,j=0;
        for (int k=0;k<Pkode;k++){
            if (Pesan[k]==' ' && Kode[k]==' '){
                continue;
            }
            else if(Kode[k]!=Pesan[k]){
                printf("#");
                i++;
            }
            else if(Kode[k]==Pesan[k]){
                printf("*");
                j++;
            }
        }
        printf("\n*= %i",j);
        printf("\n#= %i",i);   
        if(i<=j){
            printf("\nPesan Asli");
        }
        else{
            printf("\nPesan Palsu");
        }
    }
    return 0;
}