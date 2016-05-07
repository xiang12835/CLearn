#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    srand((int)time(NULL)); //使用当前系统的时间，指定一个随机的种子
    int randNum = rand()%10;

    printf("输入一个0到10的数值\n");

    int userInput;
    while (1){
        scanf("%d",&userInput);

        if (userInput<randNum) {
            printf("数值过小\n");
        }else if (userInput>randNum) {
            printf("数值过大\n");
        }else{
            printf("正确\n");
            break;
        }
    }

    printf("exit\n");

    return 0;
}