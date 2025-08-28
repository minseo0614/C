#include <stdio.h>

int main(void){
    int a,b, cnt=0;
    if (scanf("%d %d",&a,&b)!=2) return 1;
    if (a>b){ int t=a; a=b; b=t; }
    for (int v=a; v<=b; v++){
        if (v%2!=0){
            printf("%4d", v);
            cnt++;
            if (cnt%5==0) putchar('\n');
        }
    }
    if (cnt%5!=0) putchar('\n');
    return 0;
}
