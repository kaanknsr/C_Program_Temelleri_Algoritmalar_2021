#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    /*
    char bos[100];// max karakter sayisini gir
    strcpy(bos,"Benim");
    strcat(bos," adim");
    strcat(bos," can boz");
    // iki karakter dizisini birleştirir
    printf("%s",bos);
    */

    char can[100];
    char canan[100];
    int a;

    printf("Lutfen bir yazi giriniz \n");
    gets(can);// gets boşluklarıda alır scanf almaz

    printf("Lutfen ikinci yaziyi giriniz \n");
    gets(canan);

    printf("Birinci yazinin sonuna kaç karakter eklemek istersiniz\n");
    scanf("%d",&a);

    printf("Eklemeden once %s",can);

    printf("\nBirlestirmeden sonra\n");
    strncat(can,canan,a);

    printf("%s",can);
    return 0;
}
