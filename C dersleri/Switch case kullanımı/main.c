#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int day=3;
    switch(day)
    {
        case 1:printf("Pazartresi");
        break;
        case 2:printf("Salı");
        break;
        case 3:printf("Carsamba");
        break;
        case 4:printf("Persembe");
        break;
        case 5:printf("Cuma");
        break;
        case 6:printf("Cumartesi");
        break;
        case 7:printf("Pazar");
        break;
        default:printf("Gecersiz gun");
        break;
    }*/
    // yukardaki ve asagıdaki kodlar aynı gorevi gormektedir switch case daha kısadır
    /*
    int day=8;
    if(day==1)
    {
        printf("Pazartesi");
    }
    else if(day==2)
    {
        printf("Salı");
    }
    else if(day==3)
    {
        printf("Carsamba");
    }
    else if(day==4)
    {
        printf("Persembe");
    }
    else if(day==5)
    {
        printf("Cuma");
    }
    else if(day==6)
    {
        printf("Cumartesi");
    }
    else if(day==7)
    {
        printf("Pazar");
    }
    else
    {
        printf("Gecersiz gun");
    }*/

    //switch case kullanarak dort islem

    float a,b;
    char op;
    printf("Lutfen bir operator giriniz\t (toplama +, cıkarma -, carpma *, bolme /)\n");
    scanf("%c",&op);

    printf("Lutfen iki adet sayi giriniz\n");
    scanf("%f%f",&a,&b);

    switch(op)
    {
        case '+':printf("%.2f + %.2f= %.2f",a,b,a+b);
        break;
        case '-':printf("%.2f - %.2f= %.2f",a,b,a-b);
        break;
        case '*':printf("%.2f * %.2f= %.2f",a,b,a*b);
        break;
        case '/':printf("%.2f / %.2f= %.2f",a,b,a/b);
        break;
        default:printf("Hatali girdis yaptiniz");
    }


















    return 0;
}
