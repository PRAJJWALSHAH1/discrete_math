//1.	Programs to implement set operations union, intersection, difference, and Cartesian product.
#include <stdio.h>
int main() {
    int A[] = {1, 2, 3}, B[] = {2, 3, 4};
    int n = 3, m = 3;

    printf("Union: ");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    for (int i = 0; i < m; i++) {
        int found = 0;
        for (int j = 0; j < n; j++)
            if (B[i] == A[j]) found = 1;
        if (!found) printf("%d ", B[i]);
    }

    printf("\nIntersection: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (A[i] == B[j]) printf("%d ", A[i]);

    printf("\nA - B: ");
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < m; j++)
            if (A[i] == B[j]) found = 1;
        if (!found) printf("%d ", A[i]);
    }

    printf("\nCartesian Product:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            printf("(%d,%d) ", A[i], B[j]);

    return 0;
}
