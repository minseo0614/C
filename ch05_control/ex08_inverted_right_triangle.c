#include <stdio.h>

int main(void){
    int n;
    if (scanf("%d",&n)!=1 || n<1) return 1;
    for (int i=n;i>=1;i--){
        for (int j=0;j<i;j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
