#include <stdio.h>

int main(void){
    int A[10], B[10], C[10];
    for (int i=0;i<10;i++) scanf("%d",&A[i]);
    for (int i=0;i<10;i++) scanf("%d",&B[i]);
    for (int i=0;i<10;i++) C[i]=A[i]+B[i];
    for (int i=0;i<10;i++) printf("%d ",C[i]);
    printf("\n");
    return 0;
}
