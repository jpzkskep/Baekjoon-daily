#include <stdio.h>

int main(void) {
    
    int input[6]={0};
    int sum=0;
    
    for (int i=0; i<5; i++) {
        scanf("%d",&input[i]);
    }
    
    for (int i=0; i<5; i++) {
        sum+=input[i]*input[i];
    }
    
    printf("%d",sum%10);
    return 0;
}