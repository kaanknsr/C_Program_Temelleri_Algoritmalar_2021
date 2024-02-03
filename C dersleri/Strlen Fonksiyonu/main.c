#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char can[]="Aralik";

    printf("Karater dizimizin boyu %d\n",strlen(can));// karakterleri sayar
    printf("Karater dizimizin boyu %d",sizeof(can));// \0 ı sayar

    return 0;
}
