#include <stdio.h>

int main() {
    int a, b, c;

    printf("Masukkan panjang sisi segitiga (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Panjang sisi harus positif untuk membentuk segitiga.\n");
    } else if (a + b > c && b + c > a && a + c > b) {
        if (a == b && b == c) {
            printf("Segitiga Sama Sisi\n");
        } else if (a == b || b == c || a == c) {
            printf("Segitiga Sama Kaki\n");
        } else {
            printf("Segitiga Sembarang\n");
        }
    } else {
        printf("Panjang sisi tidak dapat membentuk segitiga.\n");
    }

    return 0;
}
