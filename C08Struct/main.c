#include <stdio.h>

struct People{
    int age;
    char* name;
};

int main() {
    struct People p;
    p.age = 10;
    p.name = "yuxiang";
    printf("age:%d\n",p.age);

    struct People p1 = p;
    p.age = 20;
    printf("age:%d\n",p1.age);

    return 0;
}