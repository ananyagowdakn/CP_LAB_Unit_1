//Nested if: positivity of two numbers
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > 0) {
        if (b > 0)
            printf("Both are positive");
        else
            printf("a is positive, b is not positive");
    } else {
        if (b > 0)
            printf("b is positive, a is not positive");
        else
            printf("Both are not positive");
    }

    return 0;
}
