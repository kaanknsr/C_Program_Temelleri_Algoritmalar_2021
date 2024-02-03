#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int sonuc;
    char can[15]="ABCDef";
    char canan[15]="ABCDEF";

    sonuc=strncmp(can,canan,4);
    // karakterlerin hafızada tuttuğu değere göre kıyaslama yapar ASKI kodaları vs
    // fakat belirlenen bir karaktere kadar



    if(sonuc<0)
    {
        printf("Can Canan dan daha kucuktur");
    }
    else if(sonuc>0)
    {
        printf("Can Canan dan daha buyuktur");
    }
    else
    {
        printf("Ikiside birbirine esittir");
    }
    return 0;
}
