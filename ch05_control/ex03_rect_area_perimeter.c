#include <stdio.h>

int main(void){
    int x1,y1,x2,y2;
    if (scanf("%d %d %d %d",&x1,&y1,&x2,&y2)!=4) return 1;
    int w = x2 - x1;
    int h = y2 - y1;
    if (w<0 || h<0) return 1;
    int area = w * h;
    int peri = 2 * (w + h);
    printf("%d %d\n", area, peri);
    return 0;
}
