#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        printf("Node Inserted\n");

        // print in reverse order
        for (j = i; j >= 0; j--) {
            printf("%d ", a[j]);
        }
        printf("\n");
    }

    return 0;
}

