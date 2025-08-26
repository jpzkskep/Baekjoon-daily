#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a , const void *b);

int main(void) {
    int n;
    char input[20001][51];
    int is_first=1;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%s",input[i]);
    }
    
    qsort(input,n,sizeof(input[0]),compare);
    
    for (int i=0; i<n; i++) {
        if (is_first) {
            printf("%s\n",input[i]);
            is_first=0;
        }
        else if (strcmp(input[i-1],input[i])==0) {
            continue;
        }
        else {
            printf("%s\n",input[i]);
        }  
    }
    return 0;
}

int compare(const void *a , const void *b) {
    char *input1=(char*)a;
    char *input2=(char*)b;
    int len1=strlen(input1);
    int len2=strlen(input2);
    if (len1!=len2) {
        if (len1>len2) return 1;
        else return -1;
    }
    else {
        return strcmp(input1,input2);
    }
}