//comma operator
#include <stdio.h>

int main() {
    int a, b, c;

    a = (b = 5, c = 10, b + c);  

    printf("%d\n", a);

    return 0;
}
