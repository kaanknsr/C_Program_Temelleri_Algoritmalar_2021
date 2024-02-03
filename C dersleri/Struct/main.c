#include <stdio.h>
#include <stdlib.h>
#define N 5
  typedef struct
  {
      char ilac_adi[20];
      int adet;
      int fiyat;
  }data;
int main()
{
    data can[N];
    int i;
    for(i=0;i<N;i++);
    {
        printf("Ilac adini giriniz\n");
        gets(can[i].ilac_adi);
        printf("Ilac adedini giriniz\n");
        scanf("%d",&can[i].adet);
        printf("Ilac fiyatini giriniz\n");
        scanf("%d",&can[i].fiyat);
        i++;

    }

    return 0;
}

