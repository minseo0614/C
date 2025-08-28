#include <stdio.h>

void draw_triangle(int h){
    for (int i=1;i<=h;i++){
        for (int j=0;j<i;j++) putchar('*');
        putchar('\n');
    }
}
void draw_square(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++) putchar('*');
        putchar('\n');
    }
}

int main(void){
    int cmd;
    while (1){
        if (scanf("%d",&cmd)!=1) return 1;
        if (cmd==3) break;
        if (cmd==1){
            int h; if (scanf("%d",&h)!=1 || h<1) return 1;
            draw_triangle(h);
        } else if (cmd==2){
            int n; if (scanf("%d",&n)!=1 || n<1) return 1;
            draw_square(n);
        } else {
            printf("RETRY\n");
        }
    }
    return 0;
}
