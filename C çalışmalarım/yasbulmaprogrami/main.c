#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas;
/* yorum sat�r�na bu sek�lde al�n�r*/


    printf("lutfen yasinizi giriniz\n");
    scanf("%d",&yas);


    if(yas>=18)
    {
       printf("oy kullanabilirsin");
    }
    else
    {
     printf("oy kullanamazsin");
    }



    return 0;
}
