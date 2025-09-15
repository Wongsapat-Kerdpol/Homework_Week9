#include <stdio.h>
int main() {
    int A[3][3];
    int *p;          
    int i, j;
    int num = 1;

    p = &A[0][0];
    for (i = 0; i < 9; i++) {
        *(p + i) = num++;
    }
    printf("Array A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", *(*(A + i) + j));
        }
        printf("\n");
    }
    return 0;
}
