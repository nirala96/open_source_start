#include <bits/stdc++.h>
using namespace std;

int Adjacency_list(int type)
{
    int n,m;
    cout << "Enter Number of vertices : ";
    cin >> n;
    cout << "\nEnter number of edge : ";
    cin >> m;
    list<int> graph[n+1];
    for(int i=0; i<m; i++)
    {
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        if(type==2) graph[b].push_back(a);
    }
    cout << "Your Graph is : \n";
    for(int node=1;node<=n;node++)
    {
        cout << node << " --> ";
        for(int &subnode: graph[node]) cout << subnode << " ";
        cout << "\n";
    }
    return 0;
}
void Adjacency_matrix(int type)
{
    cout << "Enter number of vertices: ";
    int n;
    cin >> n;
    cout << "Enter number of edge: ";
    int m;
    cin >> m;
    bool graph[n+1][n+1];
    memset(graph,false,sizeof(graph));
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        graph[a][b]=true;
        if(type==2) graph[b][a]=true;
    }
    cout << "Your Graph is: \n";
    for(int node=1;node<=n;node++)
    {
        for(int subnode=1; subnode<=n; subnode++)
        {
            if(graph[node][subnode]) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << "\n";
    }
}
void Incidence_matrix(int type)
{
    int n,m;
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "\nEnter number of edge: ";
    cin >> m;
    int graph[n+1][m+1];
    memset(graph, 0, sizeof(graph));
    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin >> a >> b;
        for(int node=1;node<=n;node++)
        {
            if(node==a) graph[node][i]=1;
            if(type==1 && node==b) graph[node][i]=-1;
            else if(type==2 && node==b) graph[node][i]=1;
        }
    }
    cout << "Your Graph is  : \n";
    for(int node=1;node<=n;node++)
    {
        cout << node << " --> ";
        for(int edge=1;edge<=m;edge++)
        {
            cout << graph[node][edge] << " ";
        }
        cout << "\n";
    }
}


int main() {

    cout << "\nGraph:\n\n";
    cout << "1 : Directed graph\n2 : Undirected graph\n";
    int type;
    cin >> type;
    cout << "1 : Incidence matrix representation\n";
    cout << "2 : Adjacency matrix representation\n";
    cout << "3 : Adjacency list representation\n";

    int graphType;
    cin >> graphType;
    if(graphType==1) Incidence_matrix(type);
    else if(graphType==2) Adjacency_matrix(type);
    else if(graphType==3) Adjacency_list(type);
    return 0;
}
