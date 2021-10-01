#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    printf("enter the amount");
    scanf("%d",&a);

    b=a/100;
    c=a%100;
    d=c/50;
    e=c%50;
    f=e/10;
    g=e%10;
    h=g/5;
    i=g%5;
    j=i/2;
    k=i%2;

    printf("100 rupees=%d\n",b);
    printf("50 rupees=%d\n",d);
    printf("10 rupees=%d\n",f);
    printf("5 rupees=%d\n",h);
    printf("2 rupees=%d\n",j);
    printf("1 rupees=%d\n",k);
}
