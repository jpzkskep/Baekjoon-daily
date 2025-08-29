#include <stdio.h>
int num[4000001];
int main(void) {
    int a,b;
    int d;
    int count=0;
    int temp;
    for (int i=2; i<=4000001; i++) {
        num[i]=1;
    }
    num[1]=0;
    for (int i=2; i<=4000001; i++) {
        for (int j=2*i; j<=4000001; j+=i) {
            num[j]=0;    // num[j]가 1이면 소수 0이면 소수가 아님
        }
    }
    
    scanf("%d %d %d",&a,&b,&d);
    for (int i=a; i<=b; i++) {
        if (num[i]==1) {    //소수일때
            temp=i;
            while (temp>=1) {
                if (temp%10==d) {
                    count++;
                    break;
                }
                temp/=10;
            }
        }
    }
    printf("%d",count);
    return 0;
}