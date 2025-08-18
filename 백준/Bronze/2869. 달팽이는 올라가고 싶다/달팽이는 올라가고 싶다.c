#include <stdio.h>
int main(void) {
    int a,b,v;
    int day;
    scanf("%d %d %d",&a,&b,&v);
    day=(v-a)/(a-b);
    if ((v-a)%(a-b)!=0) {
        day++;
    }
    day++;
    printf("%d",day);
}