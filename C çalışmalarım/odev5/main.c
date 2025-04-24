#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,toplam;

    printf("birinci sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("ikinci sayiyi giriniz:");
    scanf("%d",&sayi2);

    toplam=sayi1+sayi2;
    printf("toplam=%d",toplam);
    return 0;
}
