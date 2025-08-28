#include <stdio.h>
#include <math.h>

int main(void){
    int r;
    if (scanf("%d",&r)!=1 || r<1) return 1;
    for (int y=r; y>=-r; y--){
        for (int x=-r; x<=r; x++){
            double d = sqrt((double)x*x + (double)y*y);
            putchar(fabs(d - r) <= 0.5 ? '*' : ' ');
        }
        putchar('\n');
    }
    return 0;
}
