#include <stdio.h>
#include <stdlib.h>

int compare(const void*input1,const void*input2);    //순서정렬

int main(void) {
    int n;
    int num[500001]={0};
    long long sum=0;    //n개의 수들의 합
    int max;    //가장큰수
    int min;    //가장작은수
    int range;    //범위
    int count[8001]={0};    //개수
    int max_count=0;    //가장 많이 나온 수의 개수
    int same[8001]={0};    //중복된 수의 배열
    int idx=0;    //중복된 수의 배열 위치
    int most;    //최빈값
    int middle;    //중앙값
    double average;    //산술평균
    long long real;
    
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&num[i]);
    }
    //sum구하기,개수 구하기
    for (int i=0; i<n; i++) {
        sum+=num[i];
        count[num[i]+4000]++;
    }
    //증가순으로 정렬
    qsort(num,n,sizeof(int),compare);
    //산술평균
    average=((double)sum)/n;
    //중앙값
    middle=num[n/2];
    //최빈값
    for (int i=0; i<8001; i++) {
        if (count[i]>max_count) max_count=count[i];
    }
    for (int i=0; i<8001; i++) {
        if (count[i]==max_count) {
            same[idx++]=i-4000;
        }
    }
    if (idx>1) {    //최빈값이 1개일때
        most=same[1];
    }
    else {
        most=same[0];
    }
    //범위
    max=num[0];
    min=num[0];
    for (int i=0; i<n; i++) {
        if (num[i]>max) max=num[i];
        if (num[i]<min) min=num[i];
    }
    range=max-min;
    //출력
    if (average>=0) {
        real=(long long)(average+0.5);
        printf("%lld\n",real);
    }
    else {
        real=(long long)(average-0.5);
        printf("%lld\n",real);
    }
    printf("%d\n",middle);
    printf("%d\n",most);
    printf("%d\n",range);
    return 0;
}

int compare(const void*input1,const void*input2) {
    int num1=*(int*)input1;
    int num2=*(int*)input2;
    if (num1>num2) {
        return 1;
    }
    else {
        return -1;
    }
    return 0;
}