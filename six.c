//6.	Programs to implement Boolean matrix operations join, product, and Boolean product.
#include <stdio.h>
int main() {
    int A[2][2] = {{1, 0}, {0, 1}}, B[2][2] = {{1, 1}, {1, 0}}, C[2][2] = {{0}};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                C[i][j] |= A[i][k] & B[k][j];

    printf("Boolean Product:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
