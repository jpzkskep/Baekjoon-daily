#include <stdio.h>
int main(void) {
    char input;
    scanf("%c",&input);
    printf("%d",input-'\0');
    return 0;
}