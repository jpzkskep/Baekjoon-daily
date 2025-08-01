#include <stdio.h>
int main(void) {
    int hour,minute,overminute,overhour;
    int need;
    scanf("%d %d",&hour,&minute);
    scanf("%d",&need);
    if (need+minute<60) printf("%d %d",hour,need+minute);
    else {
        overhour=(need+minute)/60;
        overminute=(need+minute)-60*overhour;
        if (hour+overhour>23) {
            printf("%d %d",hour+overhour-24,overminute);
        }
        else {
            printf("%d %d",hour+overhour,overminute);
        }
    }
    return 0;
}