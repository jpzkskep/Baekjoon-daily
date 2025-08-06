#include <stdio.h>
int main(void) {
    char alph[101];
    int many=0;
    scanf("%s",alph);
    for (int i=0; i<100; i++) {
        if (alph[i]!='\0') many++;
        if (alph[i]=='\0') break;
    }
    printf("%d",many);
    return 0;
}