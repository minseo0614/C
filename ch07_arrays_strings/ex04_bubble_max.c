#include <stdio.h>

int main(void){
    int A[10];
    for (int i=0;i<10;i++) scanf("%d",&A[i]);
    for (int i=0;i<9;i++){
        if (A[i] > A[i+1]){
            int tmp = A[i];
            A[i] = A[i+1];
            A[i+1] = tmp;
        }
    }
    for (int i=0;i<10;i++) printf("%d ",A[i]);
    printf("\n");
    return 0;
}
