#include <stdio.h>
#include <stdlib.h>

//değişkenin değeriyle işlem
/*
int kare(int can)
{
    int sonuc=can*can;
    return sonuc;
}


int main()
{
    int x=4,karesi;


    karesi=kare(x);
    printf("%d",karesi);
    return 0;
}
*/

//değişkenin adresiyle işlem
/*
void kare(int *can,int *sonuc)
{
    *sonuc=*can**can;
}


int main()
{
    int x=4,karesi;
    int sonucum;


    kare(&sonucum,&x);
    printf("%d",sonucum);
    return 0;
}
*/
//EGZERSİZ

//x üzeri y değerinin hesaplanması x=4, y=5

int ustune_al(int a,int b)
{
    int i,sonucum=1;
    for(i=0;i<b;i++)
    {
        sonucum=sonucum*a;
    }
    return sonucum;
}


int main()
{
    int x=4,y=5,sonuc;
    sonuc=ustune_al(x,y);
    printf("%d",sonuc);

    return 0;
}
//void le yapımı
/*
void ustune_al(int a,int b,int *can)
{
    int i;
    *can=1;
    for(i=0;i<b;i++)
    {
        *can=*can*a
    }

}


int main()
{
    int x=4,y=5,sonuc;
    ustune_al(x,y,&sonuc);
    printf("%d",sonuc);

    return 0;
}
*/







