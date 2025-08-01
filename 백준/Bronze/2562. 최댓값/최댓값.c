#include <stdio.h>
int main(void) {
    int input[9],max,where;
    for (int i=0; i<9; i++) {
        scanf("%d",&input[i]);
    }
    max=input[0];
    where=1;
    for (int i=0; i<9; i++) {
        if (input[i]>max) {
            max=input[i];
            where=i+1;
        }
    }
    printf("%d\n",max);
    printf("%d",where);
    return 0;
}