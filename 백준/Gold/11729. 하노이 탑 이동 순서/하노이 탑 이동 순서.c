#include <stdio.h>

int Hanoi(int num,int from,int by,int to);
int Hanoi_count(int num,int from,int by,int to);
int count=0;

int main(void) {
    int n;
    scanf("%d",&n);
    Hanoi_count(n,1,2,3);
    printf("%d\n",count);
    Hanoi(n,1,2,3);
    return 0;
}

int Hanoi_count(int num,int from,int by,int to) {
    if (num==1) {
        count++;
    }
    else {
        Hanoi_count(num-1,from,to,by);
        count++;
        Hanoi_count(num-1,by,from,to);
    }
}

int Hanoi(int num,int from,int by,int to) {
    if (num==1) {
        printf("%d %d\n",from,to);
    }
    else {
        Hanoi(num-1,from,to,by);
        printf("%d %d\n",from,to);
        Hanoi(num-1,by,from,to);
    }
}