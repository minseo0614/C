#include <stdio.h>

int main(void){
    int A[10];
    for (int i=0;i<10;i++) scanf("%d",&A[i]);
    for (int i=0;i<9;i++){
        for (int j=0;j<9-i;j++){
            if (A[j] > A[j+1]){
                int tmp=A[j]; A[j]=A[j+1]; A[j+1]=tmp;
            }
        }
    }
    for (int i=0;i<10;i++) printf("%d ",A[i]);
    printf("\n");
    return 0;
}
