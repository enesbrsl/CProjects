#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,sutun,i,j;
    printf("satir sayisini girirniz:");
    scanf("%d",&satir);

   printf("sutun sayisini girirniz:");
   scanf("%d",&sutun);

   for(i=1;i<=satir;i++)
   {
       for(j=1;j<=sutun;j++)
       {
           printf("*");


       }
       printf("\n");
   }


    return 0;
}
