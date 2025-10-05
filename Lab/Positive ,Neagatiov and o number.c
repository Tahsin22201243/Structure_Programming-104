#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    int count = 1;

    while (count <= N) {
        int num;
        printf("Enter number %d: ", count);
        scanf("%d", &num);

        if (num == 0) {
            printf("%d is zero.\n", num);
        } else if (num > 0) {
            printf("%d is positive.\n", num);
        } else {
            printf("%d is negative.\n", num);
        }

        count++;
    }

}

