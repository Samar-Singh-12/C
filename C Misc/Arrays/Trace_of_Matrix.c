#include <stdio.h>
#define order 3

int main() {
    int mat[order][order] = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};
    int sum = 0;

    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            if (i == j) {
                sum += mat[i][j];
            }
        }
    }

    printf("Trace of Matrix: %d", sum);

    return 0;
}