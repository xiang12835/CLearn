#include <stdio.h>

int main() {
    int i,j;

    for (i = 0; i < 100; i++){
        printf("%d\n",i);
    }

    for (j = 0; j < 100 ; printf("%d\n",j++)) {
        puts("我先执行");
    }

    int k = 0;
    while (k<100){
        printf("%d\n",k);
        ++k;
    }

    int a = 0;
    do {
        printf("%d\n",a);
        a++;
    }while (a<100);

    return 0;
}