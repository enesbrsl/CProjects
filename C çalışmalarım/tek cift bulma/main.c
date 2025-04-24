#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayim;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayim);
    if (sayim%2 == 0)
    {
    printf("%d sayisi cifttir", sayim);
    }
    else
    {
    printf("%d sayisi tektir", sayim);
    }

    return 0;
}

