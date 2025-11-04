#include <stdio.h>

int max(int num1,int num2);

int main(void) {
    
    int t;
    int n;
    int num[1001];
    int total;
    int max_here;
    scanf("%d",&t);
    
    for (int i=0; i<t; i++) {
        
        scanf("%d",&n);
        
        for (int j=0; j<n; j++) {            
            scanf("%d",&num[j]);                       
        }
        max_here=num[0];
        total=num[0];
        for (int j=1; j<n; j++) {
            max_here=max(num[j],max_here+num[j]);
            total=max(max_here,total);
        }
        printf("%d\n",total);
    }
    return 0;
}

int max(int num1,int num2) {
    if (num1>num2) return num1;
    else return num2;
}