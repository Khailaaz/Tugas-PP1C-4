#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &bilangan);

    if (bilangan <= 0) {
        printf("Silakan masukkan bilangan bulat positif.\n");
        scanf("%d", &bilangan);
    } else {
        if (bilangan % 2 == 0) {
            printf("GENAP\n");
        } else {
            printf("GANJIL\n");
        }
    }

    return 0;
}