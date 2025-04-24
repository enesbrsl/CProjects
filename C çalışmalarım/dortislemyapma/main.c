#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;

    char op;
    printf("lutfen bir operator giriniz\n");
    scanf("%c",&op);

    printf("lutfen iki adet  sayi giriniz\n");
    scanf("%f%f",&a,&b);

    switch(op)
    {
        case '+' :printf("%f + %f = %f",a,b,a+b);
        break;
        case '-' :printf("%f - %f = %f",a,b,a-b);
        break;
        case '/' :printf("%f / %f = %f",a,b,a/b);
        break;
        case '*' :printf("%f * %f = %f",a,b,a*b);
        break;
        default:printf("hatali giris yaptýnýz");
        break;





    }






    return 0;
}
