#include <stdio.h>

int main(void){
    int rows, cols;
    if (scanf("%d %d",&rows,&cols)!=2 || rows<1 || cols<1) return 1;
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
