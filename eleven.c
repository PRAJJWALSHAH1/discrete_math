//11.	Programs to generate permutations and combinations.
#include <stdio.h>

void swap(char *x, char *y) {
    char temp = *x; *x = *y; *y = temp;
}

void permute(char *a, int l, int r) {
    if (l == r) printf("%s\n", a);
    else {
        for (int i = l; i <= r; i++) {
            swap((a + l), (a + i));
            permute(a, l + 1, r);
            swap((a + l), (a + i));
        }
    }
}

int main() {
    char str[] = "123";
    permute(str, 0, 2);
    return 0;
}
