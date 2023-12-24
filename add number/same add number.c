#include<stdio.h>
int main()
{
    int a=1,i,d;
    for(i=0; i<=30; i++)
    {
        printf("%d + %d =%d\n",a,a,a+a);
        a=a+a;
    }
}
