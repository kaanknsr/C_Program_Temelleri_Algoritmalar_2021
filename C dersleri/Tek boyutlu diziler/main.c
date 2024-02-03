#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //dizilerde eleman 0 dan başlıyor
    int dizi[5]={1,3,5,7,9};
    printf("%d",dizi[0]);
    */

    // ilk 10 çift elemanlı dizi

    int dizi[10];
    int i;
    for(i=0;i<10;i++)
    {
        dizi[i]=2*i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",dizi[i]);
    }

    //klavyeden girilen 4 sayının toplamını bulan bir c programı (for ve wihile)











    return 0;
}
