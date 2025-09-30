#include <stdio.h>

#include <stdlib.h>

typedef struct {

    long long x;

    long long y;

}Point;

long long get_length(Point num1,Point num2);

int compare(const void* a,const void* b);

int main(void) {

    Point point[4];

    int t;

    long long length[6];

    scanf("%d",&t);

    while (t--) {

        for (int i=0; i<4; i++) {

            scanf("%lld %lld",&point[i].x,&point[i].y);            

        }
        int idx=0;
        
        for (int i=0; i<4; i++) {

            for (int j=i+1; j<4; j++) {

                length[idx++]=get_length(point[i],point[j]);

            }

        }

        qsort(length,6,sizeof(long long),compare);

        if (length[0]>0 && length[0]==length[1] && length[1]==length[2] && length[2]==length[3] && length[4]==length[5]) {

            printf("1\n");

        }

        else {

            printf("0\n");

        }

    }

    return 0;

}

long long get_length(Point num1,Point num2) {

    long long answer;

    answer=(num1.x-num2.x)*(num1.x-num2.x)+(num1.y-num2.y)*(num1.y-num2.y);

    return answer;

}
int compare(const void* a,const void* b) {

    long long num1=*(long long*)a;

    long long num2=*(long long*)b;

    if (num1>num2) return 1;

    else return -1;

}