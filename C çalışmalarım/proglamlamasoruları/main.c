#include <stdio.h>
#include <stdlib.h>

int main()
{
  double i,s=1;

   printf("faktorýyelý alýnacak sayýyý giriniz:");
   scanf("%lf",&i);

   for (i;i>1;i--)

   {
       s=s*i;

   }

printf("sonuc=%.0lf",s);




    return 0;
}
