#include<stdio.h>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
vector<int>arr[10];
vector<int>::iterator ptr;
void insert(int u,int v);
bool bipartite(int s);
int main()
{
	insert(1,2);
	insert(1,3);
	insert(3,2);
	//insert(3,4);
	//insert(1,3);
	//insert(5,5);
	printf(bipartite(1)?"true":"false");
	/*for(int i=0;i<10;i++)
		for(ptr=arr[i].begin();ptr!=arr[i].end();ptr++)
			printf("%d ",*ptr);
	*/
}

void insert(int u,int v)
{
	arr[u].push_back(v);
	arr[v].push_back(u);
}

bool bipartite(int s)
{
	int temp;
	int visited[10]={0};
	int level[10]={0};
	level[s]=0;
	visited[s]=1;
	//memset(visited,0,sizeof(int));
	queue<int>q;
	q.push(s);
	while(!q.empty())
	{
			temp=q.front();
			//printf("%d ",temp);
			q.pop();
			for(ptr=arr[temp].begin();ptr!=arr[temp].end();ptr++)
			{
				printf("%d  ",*ptr);
				if(visited[*ptr]==0)
				{
					visited[*ptr]=1;
					level[*ptr]=level[temp]+1;
					q.push(*ptr);
				}
				else if(level[*ptr]==level[temp])
				{
					return false;
				}
			}	
	}
	return true;	
}

