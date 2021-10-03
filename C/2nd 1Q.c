#include<stdio.h.>
int main()
{
    int a,b,c,d,e,f,g;
    printf("enter 5 digit no");
    scanf("%d",&a);

    a=(b*10000)+(c*1000)+(d*100)+(e*10)+f;
    scanf("%d,%d,%d,%d,%d",&b,&c,&d,&e,&f);
    g=b+c+d+e+f;
    printf("sum of digits is=%d\n",g);
}
