#include <stdio.h>
int main(void) {
    int n,m,box[100]={0};    // 바구니 n개 m번 공 넣음
    int start,end,number;
    scanf("%d %d",&n,&m);
    for (int i=0; i<m; i++) {
        scanf("%d %d %d",&start,&end,&number);    //시작번호 끝번호 넣을값
        for (int j=start-1; j<end; j++) {
            box[j]=number;
        }
    }
    for (int i=0; i<n; i++) {
        printf("%d ",box[i]);
    }
    return 0;
}