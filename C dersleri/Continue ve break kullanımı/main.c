#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int i;
    for(i=0;i<10;i++)
    {
       if(i==6)
       {
           break; // break devam eden donguyu sonlandırır
       }
       printf("%d\n",i);
    }*/

    int i;
    for(i=0;i<10;i++)
    {
       if(i==2)
       {
           continue; // continue devam eden dongude girili değeri atlar
       }
       if(i==8)
       {
           break;
       }
       printf("%d\n",i);
    }






    return 0;
}
