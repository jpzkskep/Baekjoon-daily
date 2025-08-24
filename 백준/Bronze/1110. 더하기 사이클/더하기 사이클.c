#include <stdio.h>
int main(void) {
    int n;
    int count=0;
    int result;
    int added;
    int is_first=1;
    scanf("%d",&n);
    result=n;
    while (1) {
        if (is_first==0 && result==n) {
            break;
        }
        is_first=0;
        added=result/10+result%10;
        if (added>=10) {
            added=added%10;
        }
        result=(result%10)*10+added;
        count++;
    }
    printf("%d",count);
    return 0;
}