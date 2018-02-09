#include <stdio.h>
#include <stdlib.h>

struct People {
    int age;
};

int main() {
    struct People *p = malloc(sizeof(struct People));
    p->age = 10;
    printf("%d\n",p->age);

    struct People *p1 = p;
    p1 -> age = 20;
    printf("%d\n",p1->age);

    free(p);

    return 0;
}