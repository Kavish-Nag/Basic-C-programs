#include <stdio.h>
#include <string.h>

int check(char str[], int i) {
    int len = strlen(str);
    if (i >= len / 2)
        return 1;
    if (str[i] != str[len - 1 - i])
        return 0;
    return check(str, i + 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (check(str, 0)){
        printf("It is a Palindrome\n");
    }
    else{
        printf("It is not a Palindrome\n");
    }
    return 0;
}
