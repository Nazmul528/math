#include<stdio.h>
int main()
{
    int n,i,r,b;
    printf("how many absolute:");
    scanf("%d",&n);
    printf("\n");
    for(i=0; i<=n; i++) {
        printf("enter the value :");
        scanf("%d",&b);
        r=abs(b);
        printf("the absolute value :%d\n",r);
        printf("\n\n");   }
}
