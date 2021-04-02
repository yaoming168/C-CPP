#include <stdlib.h>
#include <stdio.h>
int main(){
    void f1(int);
    void f2(void);
    f1(23);
    f2();
    return 0;
}
int i = 13; // 文件作用域
void f1(int i){
    for(;;){
        float i = 33.0;
        printf("%f\n",i);
//        f2();
        goto exit;
    }
    exit:
    printf("%d\n",i);
}

void f2(void){
    printf("%d\n",i);

}