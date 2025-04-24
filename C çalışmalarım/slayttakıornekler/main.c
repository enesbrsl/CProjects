#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void fonksiyon1();
void fonksiyon2();
int i= 5 ;
//global degisken
int main()
{
   /* char k='A';
    int sayi1=12;
    float sayi2=52;
    double sayi3=65.54;

    printf("karakter:%c\n",k);

    printf("sayi1:%d\n",sayi1);
    printf("sayi2:%.0f\n",sayi2);
    printf("sayi3:%.2lf\n",sayi3);*/



    int i =10;  //yerel degisken
    printf("Deger1=%d\n",i);
    fonksiyon1();



    printf("Hangisisni yazar=%d\n",i);
    fonksiyon2();
    getch();}

    void fonksiyon1()
    {
        int i =15;
        printf("Deger2=%d\n",i);
    }
    void fonksiyon2()
    {
        printf("Hangisisni yazar=%d\n",i);













    return 0;
}

