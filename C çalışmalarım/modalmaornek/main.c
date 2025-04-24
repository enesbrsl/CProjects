#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi1,sayi2,sonuc;

    printf("birinci sayiyi giriniz:");
   scanf("%d",&sayi1);

   printf("ikinci sayiyi giriniz:");
   scanf("%d",&sayi2);

   sonuc=sayi1%sayi2;

   printf("%d",sonuc);

    return 0;
}
