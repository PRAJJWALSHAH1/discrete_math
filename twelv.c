//12.	Programs to implements some probabilistic and randomized algorithms.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isProbablyPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 0; i < 3; i++) {
        int a = 2 + rand() % (n - 2);
        if (a % n == 0) return 0;
    }
    return 1;
}

int main() {
    srand(time(0));
    int n = 17;
    printf("%d is %s\n", n, isProbablyPrime(n) ? "Probably Prime" : "Not Prime");
    return 0;
}
