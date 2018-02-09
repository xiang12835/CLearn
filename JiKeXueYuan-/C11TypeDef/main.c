#include <stdio.h>

typedef struct {
    int age;
} People;

typedef void (*Func)();

void sayHello(){
    printf("type define function\n");
}

int main() {
    People p;
    p.age = 10;
    printf("%d\n",p.age);

    Func f = sayHello;
    f();

    return 0;
}