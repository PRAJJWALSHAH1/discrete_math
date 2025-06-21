//13.	Programs for representing relations, testing its properties, and testing equivalence. 
#include <stdio.h>
int main() {
    int R[3][3] = {{1,0,0}, {0,1,0}, {0,0,1}}, reflexive = 1;
    for (int i = 0; i < 3; i++)
        if (R[i][i] != 1) reflexive = 0;
    printf("Reflexive? %s\n", reflexive ? "Yes" : "No");
    return 0;
}
