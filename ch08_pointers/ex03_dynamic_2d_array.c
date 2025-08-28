#include <stdio.h>
#include <stdlib.h>

int main(void){
    int rows;
    if (scanf("%d",&rows)!=1 || rows<=0) return 1;
    int cols = 5;

    int **arr = malloc(rows * sizeof(int*));
    if (!arr) return 1;
    for (int i=0;i<rows;i++){
        arr[i] = malloc(cols * sizeof(int));
        if (!arr[i]) return 1;
    }

    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            arr[i][j] = i*10 + j;
        }
    }

    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<rows;i++) free(arr[i]);
    free(arr);
    return 0;
}
