#include <stdio.h>
int reverse(int n, int rev) {
    if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}

int main() {
    int num, rev;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    rev = reverse(num, 0);
    printf("Reversed number: %d\n", rev);
    return 0;
}
