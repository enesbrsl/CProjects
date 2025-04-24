#include <stdio.h>

main()
{
    int sayi1,sayi2;
    int toplam = 0;

    printf("1.Sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);

    for(int i = sayi1; i <= sayi2; i++)
    {
        if(i % 2 == 0){
            printf("%d\n",i);

        }
    }

}
