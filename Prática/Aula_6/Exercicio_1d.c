#include <stdio.h>

unsigned long int D_iterativo(unsigned int m, unsigned int n) {
    unsigned long int D[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
        D[i][0] = 1;
    for (int j = 0; j <= n; j++)
        D[0][j] = 1;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            D[i][j] = D[i - 1][j] + D[i - 1][j - 1] + D[i][j - 1];
        }
    }

    return D[m][n];
}

int main(void) {
    int rows = 10;
    int cols = 10;

    printf("Delannoy's Matrix - Iterative Dynamic Programming\n\n");

    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= cols; j++) {
            printf("%-10lu", D_iterativo(i, j));
        }
        printf("\n");
    }

    return 0;
}