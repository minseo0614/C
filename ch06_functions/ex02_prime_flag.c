#include <stdio.h>

int is_prime_flag(int x){
    if (x < 2) return 0;
    int flag = 1;
    for (int d=2; d*d<=x; d++){
        if (x % d == 0){ flag = 0; break; }
    }
    return flag;
}

int main(void){
    int n;
    if (scanf("%d",&n)!=1) return 1;
    printf("%s\n", is_prime_flag(n) ? "YES" : "NO");
    return 0;
}
