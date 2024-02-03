#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    && ve
    || yada
    */

    int yas;
    int ugurlu_sayi;

    printf("Lutfen yasinizi giriniz\n");
    scanf("%d",&yas);

    printf("Lutfen ugurlu sayinizi giriniz\n");
    scanf("%d",&ugurlu_sayi);

    if((yas>30) && (yas<60)||(ugurlu_sayi==13))
    {
        printf("Bravo");
    }

    return 0;
}
