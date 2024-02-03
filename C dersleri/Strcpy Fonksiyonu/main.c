#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char can[]="Benim adim Can BOZ";
    char canan[100];

    strcpy(canan,can);// can dizisinin içeriğini canan dizisine kopyalamaya yarar virgülün sağını sola kopyalar!!
    printf("%s",canan);
    return 0;
}
