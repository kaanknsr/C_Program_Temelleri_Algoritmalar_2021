#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int a=5;

    if((a%2)==1)
    {
        printf("%d",a);
    }
    */

    /*
    int a=6;
    int b=6;

    if(a==b)
    {
        printf("Ikı sayi birbirine esittir");
    }
    */

    int a;

    printf("LUTFEN BIR SAYI GIRINIZ\n");
    scanf("%d",&a);

    if(a<0)
    {
        printf("Girdiginiz sayi negatiftir");
    }
    else
    {
        printf("Girdiginiz sayi pozitiftir");
    }

    return 0;
}
