#include <stdio.h>
int main(void) {
    int n,m,box[101]={0},temp;
    int i[101]={0},j[101]={0};
    scanf("%d %d",&n,&m);
    for (int k=1; k<=m; k++) {
        scanf("%d %d",&i[k],&j[k]);
    }
    for (int i=1; i<=n; i++) {
        box[i]=i;
    }
    for (int k=1; k<=m; k++) {
        temp=box[j[k]];
        box[j[k]]=box[i[k]];
        box[i[k]]=temp;
    }
    for (int i=1; i<=n; i++) printf("%d ",box[i]);
    return 0;
}