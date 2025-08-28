#include <stdio.h>

int main(void){
    int x, pos=0, neg=0, cnt=0;
    while (cnt<100){
        if (scanf("%d",&x)!=1) return 1;
        if (x==0) break;
        if (x>0) pos++; else neg++;
        cnt++;
    }
    printf("%d %d\n", pos, neg);
    return 0;
}
