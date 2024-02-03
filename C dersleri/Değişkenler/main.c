#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamsayi=1;
    char karakter='x';
    float ondaliksayi1=3.23;
    double ondaliksayi2=423.4667;


    printf("int bellekte %d byte yer kaplar\n",sizeof(int));
    printf("char bellekte %d byte yer kaplar\n",sizeof(char));
    printf("float bellekte %d byte yer kaplar\n",sizeof(float));
    printf("double bellekte %d byte yer kaplar\n",sizeof(double));
    return 0;
}
