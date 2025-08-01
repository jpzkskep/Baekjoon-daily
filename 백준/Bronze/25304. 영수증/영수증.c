#include <stdio.h>
int main(void) {
    int all_price,many_price;
    int price,many,sum=0;
    scanf("%d",&all_price);
    scanf("%d",&many_price);
    for (int i=0; i<many_price; i++) {
        scanf("%d %d",&price,&many);
        sum=sum+(price*many);
    }
    if (sum==all_price) printf("Yes");
    else printf("No");
    return 0;
}