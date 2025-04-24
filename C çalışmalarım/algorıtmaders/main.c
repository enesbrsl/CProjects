#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,i,j;

   printf("satir sayisini girirniz:");
   scanf("%d",&satir);

   for(i=1;i<=satir;i++)
   {



   for(j=0;j<i;j++)
   {
     printf("*");



   }
      printf("\n");
   }

       for(i=satir-1;i>=1;i--)
   {


   for(j=0;j<i;j++)
   {
     printf("*");


   }
      printf("\n");


   }

    return 0;
}
