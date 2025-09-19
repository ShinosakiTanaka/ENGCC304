#include <stdio.h>

int main() {
    int n;

    printf("Enter N : \n");
    scanf("%d", &n);

    int values[n];

    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] : \n", i);
        scanf("%d", &values[i]);
    }

    printf("\nOutput\n");
    printf("\nIndex:  ");
    for (int i = 0; i < n; i++) {
        printf("%d  ", i);
    }

    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            printf("%d ", values[i]);
        } else {
            printf("#  ");
        }
    }

    printf("\n");

    return 0;
}