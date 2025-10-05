#include <stdio.h>

int main() {
    int N;
    printf("Enter an integer N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int num = 1;

        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num *= 2;
        }

        printf("\n");
    }

}

