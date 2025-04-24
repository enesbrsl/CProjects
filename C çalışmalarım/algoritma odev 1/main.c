#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("lutfen bir sayi giriniz:");
    scanf("%d",&sayi);

    if(sayi>0)
            printf("%d pozitif sayidir",sayi);

    else if (sayi<0)
        printf("%d negatif sayidir",sayi);

    else
        printf("%d sifirdir",sayi);

    return 0;
}
