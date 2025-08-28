#include <stdio.h>

int main(void){
    int x, m;
    if (scanf("%d", &x)!=1) return 1;
    m = x;
    for (int i=0;i<4;i++){
        if (scanf("%d",&x)!=1) return 1;
        if (x>m) m=x;
    }
    printf("%d\n", m);
    return 0;
}
