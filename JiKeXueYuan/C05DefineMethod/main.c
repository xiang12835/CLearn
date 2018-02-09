#include <stdio.h>

#define MAX(A,B) \
    A>B?A:B

int main() {
    printf("%d\n",MAX(20,10));

    return 0;
}