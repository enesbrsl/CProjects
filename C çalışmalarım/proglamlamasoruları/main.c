#include <stdio.h>
#include <stdlib.h>

int main()
{
  double i,s=1;

   printf("faktor�yel� al�nacak say�y� giriniz:");
   scanf("%lf",&i);

   for (i;i>1;i--)

   {
       s=s*i;

   }

printf("sonuc=%.0lf",s);




    return 0;
}
