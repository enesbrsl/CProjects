#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,sutun,i,j,k,y,b;
    k=1;

    printf("satir sayisini girirniz:");
    scanf("%d",&satir);



   b=satir;
   for(i=1;i<=satir;i++)
   {
       for(j=1;j<=satir-1;j++)
        printf(" ");
        b=b-1;
       for(y=1;y<=k;y++)
        printf("*");
       printf("\n");
       k=k+2;
   }





















    return 0;
}
