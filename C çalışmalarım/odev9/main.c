#include<stdio.h>
int main() {
    int sayi;
    printf("Mutlak degeri hesaplanacak sayý giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 0) {
        printf("mutlak degerý : %d", sayi);
    } else if (sayi == 0) {
        printf("mutlak degerý:sifýrdir.");
    } else {
        printf("Mutlak degeri = %d ", (-sayi));
    }

    return 0;
}
