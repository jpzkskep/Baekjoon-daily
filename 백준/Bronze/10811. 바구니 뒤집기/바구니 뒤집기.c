#include <stdio.h>
int main(void) {
    int n,m,box[100]={0};
    int first,end,temp;
    scanf("%d %d",&n,&m);
    for (int i=1; i<=n; i++) box[i]=i;
    for (int i=0; i<m; i++) {
        scanf("%d %d",&first,&end);
        while (first<end) {
            temp=box[first];
            box[first]=box[end];
            box[end]=temp;
            first++;
            end--;
        }
    }
    for (int i=1; i<=n; i++) {
        printf("%d ",box[i]);
    }
    return 0;
}