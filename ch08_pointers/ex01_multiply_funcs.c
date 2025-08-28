#include <stdio.h>

void mul_print(int a, int b){
    printf("%d\n", a*b);
}

int mul_return(int a, int b){
    return a*b;
}

void mul_store(int a, int b, int *res){
    *res = a*b;
}

int main(void){
    int x,y; 
    if (scanf("%d %d",&x,&y)!=2) return 1;

    mul_print(x,y);

    int r = mul_return(x,y);
    printf("%d\n", r);

    int res;
    mul_store(x,y,&res);
    printf("%d\n", res);

    return 0;
}
