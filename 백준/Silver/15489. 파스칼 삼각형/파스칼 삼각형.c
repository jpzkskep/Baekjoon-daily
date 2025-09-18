#include <stdio.h>

int num[31][31];

int main(void) {
    int r,c,w;
    int sum=0;
    int jcount=0;
    int rcount=1;
    scanf("%d %d %d",&r,&c,&w);
    num[1][1]=1;
    for (int i=2; i<31; i++) {    //1설정
        num[i][1]=1;
        num[i][i]=1;
    }
    for (int i=3; i<31; i++) {    //삼각형 전체 채우기
        for (int j=2; j<i; j++) {
            num[i][j]=num[i-1][j-1]+num[i-1][j];
        }
    }
    for (int i=r; i<r+w; i++) {
        for (int j=c; jcount<rcount; j++) {
            sum+=num[i][j];
            jcount++;
        }
        jcount=0;
        rcount++;
    }
    printf("%d",sum);
    return 0;
}