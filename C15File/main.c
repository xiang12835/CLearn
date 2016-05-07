#include <stdio.h>


int main() {
//    int i;
//    FILE *f = fopen("data.txt","w");
//    if (f!=NULL) {
//        for (i=0; i<100; i++){
//            fprintf(f,"Hello %d\n",i);
//        }
//    }
//    fclose(f);

    FILE *f = fopen("data.txt","r");
    fseek(f,0,SEEK_END);
    long size = ftell(f);
    char buf[size+1];
    fseek(f,0,SEEK_SET);
    fread(buf, sizeof(unsigned char),size,f);
    buf[size] = '\0';
    fclose(f);

    printf("%s",buf);

    return 0;
}