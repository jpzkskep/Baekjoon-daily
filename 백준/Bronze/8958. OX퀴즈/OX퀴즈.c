#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    char input[81];
    int sequence=1;
    int sum=0;
    int len;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        sum=0;
        sequence=1;
        scanf("%s",input);
        len=strlen(input);
        for (int j=0; j<len; j++) {
            if (input[j]=='O') {
                sum=sum+sequence;
                sequence++;
            }
            else {
                sequence=1;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}