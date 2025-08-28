#include <stdio.h>

int main(void){
    int low, high;
    if (scanf("%d %d",&low,&high)!=2) return 1;
    for (int v=low; v<=high; v++){
        if (v%2!=0) printf("%d ", v);
    }
    putchar('\n');
    return 0;
}
