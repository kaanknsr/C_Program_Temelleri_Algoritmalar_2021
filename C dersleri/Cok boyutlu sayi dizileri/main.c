#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int can[2][2]={{4,6},{2,3}};
    printf("%d\n",can[0][0]);
    printf("%d\n",can[0][1]);
    printf("%d\n",can[1][0]);
    */

    // EGZERSİZ
    //NxN eleman içeren bir program
    /*
    int mat[10][10];//ilk parantez satır ikinci sütun
    int i,j;

    for(i=0;i<10;i++)
    {

        for(j=0;j<10;j++)
        {
          if(i==j)
          {
              mat[i][j]=1;
          }
          else
          {
              mat[i][j]=0;
          }
        }
    }
        for(i=0;i<10;i++)
    {

        for(j=0;j<10;j++)
        {
          printf("%4d",mat[i][j]);
        }
        printf("\n");
    }
    */
    //NxP eleman içeren 2 matrisin elemanlarını toplayan bir c programı yazma sonucu 3. bir mastrise yazdırma


    int dizi1[3][4]={{1,2,5,7},{5,4,8,6},{7,1,6,5}};
    int dizi2[3][4]={{1,8,5,7},{1,2,4,6},{3,7,3,1}};
    int toplam[3][4];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%4d",toplam[i][j]);
        }
        printf("\n");
    }

    return 0;
}
