//7.	Programs to perform operations with large integers by breaking down them into set of small integers.
#include <stdio.h>
#include <string.h>

void add(char a[], char b[]) {
    int len1 = strlen(a), len2 = strlen(b);
    int carry = 0, i = len1 - 1, j = len2 - 1, k = 0;
    char result[100];

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }
    result[k] = '\0';

    printf("Sum: ");
    for (int x = k - 1; x >= 0; x--)
        printf("%c", result[x]);
}

int main() {
    char a[] = "123456", b[] = "789123";
    add(a, b);
    return 0;
}
