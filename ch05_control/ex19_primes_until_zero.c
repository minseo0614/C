#include <stdio.h>

int is_prime(int x){
    if (x<2) return 0;
    for (int d=2; d*d<=x; d++) if (x%d==0) return 0;
    return 1;
}

int main(void){
    int x, cnt=0;
    while (1){
        if (scanf("%d",&x)!=1) return 1;
        if (x==0) break;
        if (is_prime(x)) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
