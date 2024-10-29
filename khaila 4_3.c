#include <stdio.h>

int main() {
    int N;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N > 50) {
        N = N - 25;
    } else {
        N = N + 10;
    }

    printf("Output: %d\n", N);

    return 0;
}