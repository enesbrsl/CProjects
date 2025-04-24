#include <stdio.h>
#include <conio.h>

int main()
{
    int sayi,toplam=0;
    do{
        printf("bir sayi giriniz:");
        scanf("%d",&sayi);
        toplam=toplam+sayi;


           }while(sayi!=0);
             printf("toplam=%d",toplam);


    return 0;
}
