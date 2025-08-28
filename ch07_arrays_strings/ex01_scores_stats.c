#include <stdio.h>

int main(void){
    int scores[10];
    for (int i=0;i<10;i++) scanf("%d",&scores[i]);
    int max=scores[0], min=scores[0], sum=0;
    for (int i=0;i<10;i++){
        if (scores[i]>max) max=scores[i];
        if (scores[i]<min) min=scores[i];
        sum += scores[i];
    }
    double avg = sum / 10.0;
    printf("%d %d %.2f\n", max, min, avg);
    return 0;
}
