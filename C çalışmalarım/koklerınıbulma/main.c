#include <stdio.h>
#include <stdlib.h>

    int main()
{
   double a,b,c,iki=2,dort=4;//say�lar d�rekt deg�sken olarak tan�mlanamaz.ancak b�r harften sonra say� geleb�l�r.
   double x1,x2,d;//karekoku al�nacak say�  ve sonuc  double olmal�d�r.

   printf("a=");
   scanf("%lf",&a);

   printf("b=");
   scanf("%lf",&b);

   printf("c=");
   scanf("%lf",&c);

    d = pow(b,iki)-dort*a*c;

    x1 = (-b-sqrt(d))/iki*a;
    x2 = (-b+sqrt(d))/iki*a;

    printf("x1degeri=%.0lf x2degeri=%.0lf",x1,x2);
    return 0;
}
