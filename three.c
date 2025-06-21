//3.	Programs to implement fuzzy set operations.
#include <stdio.h>
float max(float a, float b) { return a > b ? a : b; }
float min(float a, float b) { return a < b ? a : b; }

int main() {
    float A[] = {0.2, 0.5, 0.8};
    float B[] = {0.6, 0.4, 0.3};

    printf("Fuzzy Union: ");
    for (int i = 0; i < 3; i++)
        printf("%.1f ", max(A[i], B[i]));

    printf("\nFuzzy Intersection: ");
    for (int i = 0; i < 3; i++)
        printf("%.1f ", min(A[i], B[i]));

    return 0;
}
