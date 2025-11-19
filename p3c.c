//Increment/Decrement Operator
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    printf("Post-increment: %d\n", a++);
    printf("After post-increment, a = %d\n", a);

    printf("Pre-increment: %d\n", ++a);

    printf("Post-decrement: %d\n", a--);
    printf("After post-decrement, a = %d\n", a);

    printf("Pre-decrement: %d\n", --a);

    return 0;
}
