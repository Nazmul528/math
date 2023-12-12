#include<stdio.h>
int main()
{
    int n,i;
    float b,r;
    printf("how many square root:");
    scanf("%d",&n);
    printf("\n");
    for(i=0; i<=n; i++) {
        printf("enter the value :");
        scanf("%f",&b);
        r=sqrt(b);
        printf("the squart root value :%.2f\n",r);
        printf("\n\n");
    }




}
