#include <stdio.h>
#include <stdlib.h>

int main()
{


    double i,n,sonuc=0;

    printf("fakt�riyeli alinacak sayiyi giriniz:");
    scanf("%lf",&n);
    for (i=1;i<=n;i++)
    {
        sonuc=sonuc+i;
    }

    printf("sonuc=%.0lf",sonuc);

    return 0;
}
