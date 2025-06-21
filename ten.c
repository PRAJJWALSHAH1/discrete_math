//10.	Programs to compute an, bn mod m, linear search etc by using recursion.
#include <stdio.h>
int power(int a, int b) {
    if (b == 0) return 1;
    return a * power(a, b - 1);
}
int modExp(int a, int b, int m) {
    if (b == 0) return 1;
    return (a * modExp(a, b - 1, m)) % m;
}
int linearSearch(int arr[], int n, int x, int i) {
    if (i >= n) return -1;
    if (arr[i] == x) return i;
    return linearSearch(arr, n, x, i + 1);
}
int main() {
    printf("2^3 = %d\n", power(2, 3));
    printf("2^3 mod 5 = %d\n", modExp(2, 3, 5));
    int arr[] = {1, 3, 5, 7};
    printf("Index of 5: %d\n", linearSearch(arr, 4, 5, 0));
    return 0;
}
