#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;

    printf("Lutfen iki adet sayi giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);

    if(sayi1>sayi2)
    {
    printf("sayi1 sayi2 den buyuktur\n");
    }
    else if (sayi1<sayi2)
    {
    printf("sayi2 sayi1 den buyuktur");
    }
    else
    {
    printf("sayi1 sayi2 ye esittir");
    }


    return 0;
}
