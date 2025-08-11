#include <stdio.h>
int main(void) {
    int count=0;
    int idx=0;
    char input[101];
    scanf("%s",input);    //c= c- dz= d- lj nj s= z= 은 크로아티아 알파벳
    while (input[idx]!='\0') {
        if (input[idx]=='c' && input[idx+1]=='=') {
            count++;
            idx=idx+2;
        }
        else if (input[idx]=='c' && input[idx+1]=='-') {
            count++;
            idx=idx+2;
        }
        else if (input[idx]=='d' && input[idx+1]=='z' && input[idx+2]=='=') {
            count++;
            idx=idx+3;
        }
        else if (input[idx]=='d' && input[idx+1]=='-') {
            count++;
            idx=idx+2;
        }
        else if (input[idx]=='l' && input[idx+1]=='j') {
            count++;
            idx=idx+2;
        }
        else if (input[idx]=='n' && input[idx+1]=='j') {
            count++;
            idx=idx+2;
        }    
        else if (input[idx]=='s' && input[idx+1]=='=') {
            count++;
            idx=idx+2;
        }    
        else if (input[idx]=='s' && input[idx+1]=='=') {
            count++;
            idx=idx+2;
        }
        else if (input[idx]=='z' && input[idx+1]=='=') {
            count++;
            idx=idx+2;
        }
        else {
            count++;
            idx++;
        }
    }
    printf("%d",count);
    return 0;
}