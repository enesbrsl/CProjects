#include <stdio.h>

main()
{
    int toplam = 0;
    int sayilar;

    for(int i =1; i <=10; i++)
    {
        printf("Bir sayi giriniz: ");
        scanf("%d",&sayilar);
        toplam += sayilar;
    }
    printf("Girdiginýzz sayilarin toplami = %d\n",toplam);
    printf("Girdiginiz sayilarin aritmeetik ortalamasi = %d",toplam /10);

}
