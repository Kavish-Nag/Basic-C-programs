#include <stdio.h>

int sum(int ar[], int n) {
    if (n == 0)
        return 0;
    return ar[n - 1] + sum(ar, n - 1);
}

int main() {
    int ar[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    printf("Sum of elements = %d\n", sum(ar, n));
    return 0;
}
