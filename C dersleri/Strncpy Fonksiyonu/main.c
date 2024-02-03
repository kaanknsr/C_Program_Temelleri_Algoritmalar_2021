#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char can[]="Benim adim Can BOZ";
    char canan[100]="";

    strncpy(canan,can,9);
    // can dizisinin içeriğini canan dizisine belirli sayıdaki karakteri kopyalamaya yarar virgülün sağını sola kopyalar!!
    // boşlukları da karakter olarak sayar
    printf("%s",canan);
    return 0;
}
