#include <stdio.h>

int main() {
   
    struct S{
        int first;
        int second;
        int third;
    };
    struct S number;
    struct S *ptr = &number;
    printf("first value: ");
    scanf("%d", &ptr->first);
    printf("second value: ");
    scanf("%d", &ptr->second);

     ptr->third = ptr->first + ptr->second;
     printf("Total: %d\n", ptr->third);
    return 0;
}