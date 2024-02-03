#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int a=5;
    while(a<20)
    {
        printf("%d\n",a);
        a=a-5;
    }
    */

    /*
    int elma=10;
    while(elma>0)
    {
        printf("Cebimde %d tane elma var\n",elma);
        elma=elma-1;
    }

    printf("Cebimde elma kalmadı");
    */
     int elma=10;
    do
    {
        printf("Cebimde %d tane elma var\n",elma);
        elma=elma-1;
    }while(elma>0);

    printf("Cebimde elma kalmadı");


    return 0;
}
