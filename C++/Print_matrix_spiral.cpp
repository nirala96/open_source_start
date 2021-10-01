#include<iostream>
using namespace std;
void spiralprint(int a[][10],int m,int n){
	int strow=0;
	int endrow=m-1;
	int stcol=0;
	int endcol=n-1;
	while(strow<=endrow && stcol<=endcol){
		for(int i=stcol;i<=endcol;i++){
			cout<<a[strow][i]<<" ";
		}
		strow++;
		for(int i=strow;i<=endrow;i++){
			cout<<a[i][endcol]<<" ";
		}
		endcol--;
		if(endcol>strow){
		for(int i=endcol;i>=stcol;i--){
			cout<<a[endrow][i]<<" ";
		}}
		endrow--;
		if(endcol>stcol){
		for(int i=endrow;i>=strow;i--){
			cout<<a[i][stcol]<<" ";
		}
		stcol++;
	}}
	
	
}

int main(){
int row,column,val=1;
int a[10][10]={0};
cout<<"enter row and column\n";
cin>>row>>column;
cout<<"\n Matrix is :\n";

for(int i=0;i<row;i++){
for(int j=0;j<column;j++){
//cin>>a[i][j];	
a[i][j]=val;
val++;

}}
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<a[i][j]<<"	";
		}cout<<endl;
	}
cout<<"\n Spiral clockwise:";
spiralprint(a,row,column);
return 0;
}

