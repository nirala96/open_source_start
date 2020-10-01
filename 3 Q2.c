#include<stdio.h>
int main()
{
            int a,p;
            printf("enter a no.");
            scanf("%d",&a);
            p=a%2;
            if(p==1)
                        printf("no. is odd");
            else
                        printf("no. is even");
            return 0;
}
