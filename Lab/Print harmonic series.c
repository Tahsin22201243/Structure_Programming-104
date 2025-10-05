#include <stdio.h>

int main() {
    int N;
    printf("Enter a value for N: ");
    scanf("%d", &N);

    float sum = 0.0;
    printf("Harmonic series up to %d: ", N);

    for (int i = 1; i <= N; i++) {
        sum = 1.0 / i;
        printf("%.2f", sum);

        if (i < N) {
            printf(" + ");
        }
    }

    printf("\n");

}
