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
        double r=log10(a);
        printf("the log10(%d) value :%.2lf\n",a,r);
        printf("\n\n");
    }




}
