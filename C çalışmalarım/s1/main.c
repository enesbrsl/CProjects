#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,i;
    char isim[100];

   printf("isim giriniz:");
    scanf("%s",&isim);

    printf("kac kez tekeraralanacak:");
    scanf("%d",&s1);




   for(i=0;i<s1;i++)
   {
       printf("%s\n",isim);

   }






    return 0;
}
