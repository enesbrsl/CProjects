#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toplam=0,a,b;


    printf("lutfen �k� adet say� g�r�rn�z=");
    scanf("%d%d",&a,&b);

    for(a;a<=b;a=a+2)
    {
        if(a%2==0)
        {
            toplam=toplam+a;
            printf("toplam�=%d",toplam);
        }






    }




    return 0;
}
