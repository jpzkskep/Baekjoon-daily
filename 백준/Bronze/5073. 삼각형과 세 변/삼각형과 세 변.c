#include <stdio.h>
int main(void) {
    int n1,n2,n3;
    int max;
    while (1) {
        scanf("%d %d %d",&n1,&n2,&n3);
        if (n1==0 && n2==0 && n3==0) {
            return 0;
        }
        if (n1>=n2 && n1>=n3) {
            max=n1;
            if (max>=n2+n3) {
                printf("Invalid\n");
                continue;
            }
        }
        else if (n2>=n1 && n2>=n3) {
            max=n2;
            if (max>=n1+n3) {
                printf("Invalid\n");
                continue;
            }
        }
        else if (n3>=n1 && n3>=n2) {
            max=n3;
            if (max>=n1+n2) {
                printf("Invalid\n");
                continue;
            }
        }
        if (n1==n2 && n2==n3) {
            printf("Equilateral\n");
        }
        else if (n1==n2 || n1==n3 || n2==n3) {
            printf("Isosceles\n");
        }
        else {
            printf("Scalene\n");
        }
    }
    return 0;
}