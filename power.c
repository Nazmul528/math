#include<stdio.h>
int main()
{
    int n,i,a,b,s;
    printf("how many math:");
    scanf("%d",&n);
    printf("\n");
    for(i=0; i<=n; i++) {
        printf("enter the base :");
        scanf("%d",&a);
         printf("enter the power :");
        scanf("%d",&b);
        s=a+b;
        double r=pow(a,b);
        printf("the  value :%.2lf\n",r);
        printf("\n\n");
    }




}
