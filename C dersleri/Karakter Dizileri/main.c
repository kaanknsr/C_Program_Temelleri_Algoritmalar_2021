#include <stdio.h>
#include <stdlib.h>

int main()
{
    char can[]={'c','a','n','a','n','\0'};
    char dizim[]="canan";
    printf("%s\n",can);

    char kullanici[100];
    printf("Lutfen bir karakter dizisi giriniz\n");
    scanf("%s",&kullanici);
    printf("%s",kullanici);
    return 0;
}
