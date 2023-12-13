#include<stdio.h>
int main()
{
    int n,i;
    float a;
    printf("how many math:");
    scanf("%d",&n);
    printf("\n");
    for(i=0; i<=n; i++) {
        printf("enter the value:");
        scanf("%f",&a);
        double r=round(a);
        printf("the round(%f) value :%.2lf\n",a,r);
        printf("\n\n");
    }




}
