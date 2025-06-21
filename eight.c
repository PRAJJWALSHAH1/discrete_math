//8.	Programs to generate truth tables of compound propositions.
#include <stdio.h>
int main() {
    printf("P Q | AND OR XOR\n");
    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            printf("%d %d |  %d   %d   %d\n", p, q, p && q, p || q, p ^ q);
        }
    }
    return 0;
}
