#include <stdio.h>

void sayHello(){
    printf("Hello C\n");
}

int main() {
//    sayHello();

    void (*p)();  //通过一个函数指针
    p = sayHello;  //指向sayHello方法
    p();  //通过指针来执行方法

    return 0;
}