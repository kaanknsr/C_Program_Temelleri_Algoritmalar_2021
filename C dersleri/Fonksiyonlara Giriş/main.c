#include <stdio.h>
#include <stdlib.h>


void tekmiciftmi(int can)//void geriye değer göndermez
{
   if(can%2==0)
    {
        printf("Girdiginiz sayi çift");
    }
    else
    {
        printf("Girdiginiz sayi tek");
    }
}



int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    tekmiciftmi(sayi);



    return 0;
}

