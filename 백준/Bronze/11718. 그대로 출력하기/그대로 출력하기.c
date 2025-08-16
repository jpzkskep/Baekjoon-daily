#include <stdio.h>
int main(void) {
    char input[101];
    while (fgets(input,sizeof(input),stdin)!=0) {
        fputs(input,stdout);
    }
    return 0;
}