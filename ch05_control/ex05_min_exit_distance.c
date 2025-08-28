#include <stdio.h>

int main(void){
    int x1,y1,x2,y2,p,q;
    if (scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&p,&q)!=6) return 1;
    if (p<=x1 || p>=x2 || q<=y1 || q>=y2){
        printf("OUTSIDE\n");
        return 0;
    }
    int d1 = p - x1;
    int d2 = x2 - p;
    int d3 = q - y1;
    int d4 = y2 - q;
    int min = d1;
    if (d2<min) min=d2;
    if (d3<min) min=d3;
    if (d4<min) min=d4;
    printf("%d\n", min);
    return 0;
}
