#include <stdio.h>

int main(void){
    int h;
    if (scanf("%d",&h)!=1 || h<1) return 1;
    for (int i=1;i<=h;i++){
        for (int sp=0; sp<h-i; sp++) putchar(' ');
        for (int k=0; k<2*i-1; k++) putchar('*');
        putchar('\n');
    }
    return 0;
}
