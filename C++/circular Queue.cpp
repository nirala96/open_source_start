#include<stdio.h>
#define SIZE 10
int arr[SIZE]={0};
int f=-1,r=-1;
void insert(int item);
void remove();
void display();
int main()
{
	insert(10);
	insert(14);
	insert(25);
	insert(30);
	remove();
	display();
}

void insert(int item)
{
	if ((f==0 && r==SIZE-1) || r==f-1)
	{
		printf("overflow");
		return;
	}
	else if(f==-1 && r==-1)
	{
		f=r=0;
		arr[r]=item;
	}
	else if(r==SIZE-1 && f!=0)
	{
		r=0;
		arr[r]=item;
	}
	else
	{
		arr[++r]=item;
	}
}
void remove()
{
	int data;
	data=arr[f];
	if(f==-1)
	{
		printf("Queue is Empty");
		return;
	}
	arr[f]=-1;
	if(f==r)
	{
		f=r=-1;
	}
	else if(f==SIZE-1)
		f=0;
	else
		++f;
}

void display()
{
	if(f==-1)
	{
		printf("queue is empty");
		return;
	}
	else if(f<=r)
	{
		for(int i=f;i<=r;i++)
		{
			printf(" %d",arr[i]);
		}
	}
	else
	{
		for(int i=f;i<SIZE;i++)
		{
			printf(" %d",arr[i]);
		}
		for(int i=0;i<=r;i++)
		{
			printf(" %d",arr[i]);
		}
	}
}
