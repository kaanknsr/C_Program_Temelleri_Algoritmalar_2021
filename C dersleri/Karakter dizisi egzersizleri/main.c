#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
    // iki adet dizi oluşturun 1. bonne 2. soiree strcpy ve strncpy kullanarak iki diziyi birleştirin
    char dizi1[]="bonne";
    char dizi2[]="soiree";
    char sonuc[100]="";

    strcpy(sonuc,dizi1);
    strncpy(sonuc+3,dizi2,5);
    printf("%s",sonuc);
    */

    //iki boyutlu bir dizi oluşturun dizinin elemanları:bir,iki,uc,dort,bes olsun dizinin 4. elemanın 3. karakterini ekrana bastırın

    char can[100][100]={"bir","iki","uc","dort","bes"};
    printf("Dizimin dorduncu elemani: %s\n",can[3]);
    printf("Dizimin dorduncu elemaninin ucuncu karakteri: %c",can[3][2]);
















    return 0;
}
