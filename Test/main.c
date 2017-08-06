#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    test();
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int result = findAverage(a, b);
    printf("%d", result);
    return 0;
}


int findAverage(int num1, int num2) {

    return ( num1 + num2) /2;
}

int test() {
    printf("testing git commit ");
}
