#include <stdio.h>

int main(void){
    int x, cnt_neg=0, last_idx=0;
    for (int i=1;i<=10;i++){
        if (scanf("%d",&x)!=1) return 1;
        if (x<0){ cnt_neg++; last_idx=i; }
    }
    printf("%d %d\n", cnt_neg, last_idx); // 음수가 없으면 0 0
    return 0;
}
