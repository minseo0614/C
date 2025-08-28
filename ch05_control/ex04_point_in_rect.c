#include <stdio.h>

int main(void){
    int x1,y1,x2,y2,p,q;
    if (scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&p,&q)!=6) return 1;
    int inside = (p>x1 && p<x2 && q>y1 && q<y2);
    printf("%s\n", inside ? "INSIDE" : "OUTSIDE");
    return 0;
}
