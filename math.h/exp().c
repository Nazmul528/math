#include<stdio.h>
int main()
{
    int n,i,a;
    printf("how many math:");
    scanf("%d",&n);
    printf("\n");
    for(i=0; i<=n; i++) {
        printf("enter the value:");
        scanf("%d",&a);
        double r=exp(a);
        printf("the exp(%d) value :%.2lf\n",a,r);
        printf("\n\n");
    }




}
