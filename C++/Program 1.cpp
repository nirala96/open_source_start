#include<iostream>
using namespace std;
int main()
{
	int v,p,r,n;
	cout <<"Enter Value of V,P,R,N\n";
	cin >>v;
	cin >>p;
	cin >>r;
	cin >>n;
	
	v=p(1+r)^n;
	
	cout << "V is equal to \n" <<v;
	return 0;
}
