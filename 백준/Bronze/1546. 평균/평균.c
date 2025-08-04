#include <stdio.h>
int main(void) {
    int n,score[1000]={0},max;
    double average,new_score[1000]={0},sum=0;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d ",&score[i]);
    }
    max=score[0];
    for (int i=0; i<n; i++) {
        if (score[i]>max) max=score[i];
    }
    for (int i=0; i<n; i++) {
        new_score[i]=(double)score[i]/max*100;
        sum+=new_score[i];
    }
    average=sum/n;
    printf("%f",average);
    return 0;
}