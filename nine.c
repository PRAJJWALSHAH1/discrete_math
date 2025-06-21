//9.	Programs to test validity of arguments by using truth tables.
#include <stdio.h>
int main() {
    printf("P Q | P->Q | Valid\n");
    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            int imp = (!p || q);
            printf("%d %d |   %d   | %s\n", p, q, imp, imp ? "Yes" : "No");
        }
    }
    return 0;
}
