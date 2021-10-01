#include<stdio.h>
int main()
{
   double r;               //r=radius
   printf("Enter radius of circle: ");
   scanf("%lf",&r); 
   double pi=3.14;             
   if(r<10)
   {
       printf("circumference of circle with radius %lf is %lf \n",r,2*pi*r);
   }
   else if(r>10)
   {
       printf("area of circle with radius %lf is %lf \n",r,pi*r*r);
   }
   else
   {
       printf("not defined \n");
   }
   return 0;
}
