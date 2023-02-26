#include <stdio.h>

// Toplama Fonksiyonu
//TO DO

// Çıkarma Fonksiyonu
//TODO

// Çarpma Fonksiyonu

//TODO

// Bölme Fonksiyonu

//TODO

int main() {
    int sayi1 = 10;
    int sayi2 = 2;

    // Toplama işlemi
    int sonuc1 = topla(sayi1, sayi2);
    printf("%d + %d = %d\n", sayi1, sayi2, sonuc1);

    // Çıkarma işlemi
    int sonuc2 = cikar(sayi1, sayi2);
    printf("%d - %d = %d\n", sayi1, sayi2, sonuc2);

    // Çarpma işlemi
    int sonuc3 = carp(sayi1, sayi2);
    printf("%d * %d = %d\n", sayi1, sayi2, sonuc3);

    // Bölme işlemi
    float sonuc4 = bol(sayi1, sayi2);
    printf("%d / %d = %.2f\n", sayi1, sayi2, sonuc4);

    return 0;
}
