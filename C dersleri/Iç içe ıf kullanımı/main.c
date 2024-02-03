#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Lutfen ilk sayiyi giriniz: ");
    scanf("%d",&a);
    printf("Lutfen ikinci sayiyi giriniz: ");
    scanf("%d",&b);

    if(a%2==1)
    {
        if(b%2==1)
        {
            printf("Ilk sayi ve ikinci sayi tektir");
        }
        else
        {
            printf("Ilk sayi tektir, ikinci sayi çifttir");
        }
    }
    else
    {
         if(b%2==1)
        {
            printf("Ilk sayi çifttir, ikinci sayi tektir");
        }
        else
        {
            printf("Ilk sayi ve ikinci sayi çifttir");
        }
    }











    return 0;
}
