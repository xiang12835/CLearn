#include <stdio.h>

void test(int score){
    if (score >= 90){
        printf("优秀\n");
    } else if (score >= 80) {
        printf("良好\n");
    } else if (score >= 60) {
        printf("及格\n");
    } else {
        printf("不及格\n");
    }
}

void test1(int score){
    switch (score/10) {
        case 9:
            puts("优秀");
            break;
        case 8:
            puts("良好");
            break;
        case 7:
        case 6:
            puts("及格");
            break;
        default:
            puts("不及格");
            break;
    }
}

int max(int a,int b){
    return a>b?a:b;
}

int main() {
    test(88);
    test1(35);
    printf("%d", max(20,10));

    return 0;
}