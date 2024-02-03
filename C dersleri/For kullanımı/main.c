#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*FOR KULLANIMI

   for(initialisation;condition;action)
   {
       statements
   }

   WHİLE KULLANIMI

   initialisation;
   while(condition);
   {
       statements
       action
   }*/
/*
   int i;

   for(i=0;i<10;i++)
   {
       printf("%d\n",i); // i+1 10 uda yazdırır
   }
*/
   /*
   int i=0;
   while(i<10)
   {
       printf("%d\n",i);
       i++;
   }
   */

   /*
   int i=0;
   do
   {
       printf("%d\n",i);
       i++;
   }while(i<10);
   */

   // 1 den girilen sayiya kadar olan satılarn carpimi
   int i;
   int carpim=1;

   for(i=1;i<5;i++)
   {
       carpim=carpim*i;
   }
   printf("1 den %d kadar olan sayilarin carpimi= %d",i,carpim);


    return 0;
}
