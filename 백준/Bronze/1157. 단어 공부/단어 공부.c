#include <stdio.h>
int main(void) {
    char alphabet[26];
    char Alphabet[26];
    char input[1000001];
    int many[26]={0};    //알파벳이 나온 개수
    int max=0;    //가장 많이 나온 알파벳의 개수
    int idx;    //가장 많이 나온 알파벳의 위치
    for (int i=0; i<26; i++) {    //alphabet[0]=a  Alphabet[0]=A
        alphabet[i]=i+97;
        Alphabet[i]=i+65;
    }
    scanf("%s",input);
    for (int i=0; input[i]!='\0'; i++) {
        for (int j=0; j<26; j++) {
            if (input[i]==alphabet[j]) {
                many[j]++;
            }
            if (input[i]==Alphabet[j]) {
                many[j]++;
            }
        }
    }
    //many[i]에 각각 알파벳 몇번 나왔는지 숫자가 담김
    for (int i=0; i<26; i++) {
        if (many[i]>max) {
            max=many[i];
            idx=i;
        }
    }
    for (int i=0; i<26; i++) {
        if (many[i]==max && i!=idx) {
            printf("?");
            return 0;
        }
    }
    printf("%c",idx+65);
    return 0;
}