#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=2;
    int yaricap;
    const float pi=3.14;

    printf("yaricap bilgisini giriniz:");
    scanf("%d",&yaricap);

    printf("cevre=%.2f\n",sayi*pi*yaricap);
    printf("Alan=%.2f",pi*yaricap*yaricap);

    return 0;
}
