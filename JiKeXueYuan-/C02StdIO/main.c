#include <stdio.h>

int main() {
    printf("Hello %d",100);
    printf("Hello %d\n",50);

    puts("Hello C");
    puts("Hello world");

    char buf[100];
    gets(buf);
    puts(buf);

    int a;
    scanf("%d",&a);
    printf("%d\n",a);

    return 0;
}