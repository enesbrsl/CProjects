#include<stdio.h>
int main() {
    int sayi;
    printf("Mutlak degeri hesaplanacak say� giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 0) {
        printf("mutlak deger� : %d", sayi);
    } else if (sayi == 0) {
        printf("mutlak deger�:sif�rdir.");
    } else {
        printf("Mutlak degeri = %d ", (-sayi));
    }

    return 0;
}
