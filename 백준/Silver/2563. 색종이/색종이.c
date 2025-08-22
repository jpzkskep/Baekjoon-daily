#include <stdio.h>

int is_print[100][100];

int main(void) {
    int n,x,y;
    int count=0;
    
    scanf("%d",&n);
    
    for (int i=0; i<n; i++) {
        scanf("%d %d",&x,&y);
        for (int j=x; j<x+10; j++) {
            for (int k=y; k<y+10; k++) {
                is_print[j][k]=1;
            }
        }
    }
    
    for (int i=0; i<100; i++) {
        for (int j=0; j<100; j++) {
            if (is_print[i][j]==1) count++;
        }
    }
    
    printf("%d",count);
    return 0;
}