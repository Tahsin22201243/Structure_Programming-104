#include <stdio.h>

int main() {
    int x, N;
    printf("Enter (x and N): ");
    scanf("%d %d", &x, &N);

    int multi = 1;
    printf("Sample Output:\n");

    do {
        printf("%d No. Multiplier of %d: %d\n", multi, x, x * multi);
        multi++;
    } while (multi <= N);

}

