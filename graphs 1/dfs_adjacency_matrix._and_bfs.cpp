#include<iostream>
#include<queue>
using namespace std;
void printDFS(int **edges,int n,int sv,bool *visited)
{
    cout<<sv<<endl;
    visited[sv]==1;
    for(int i=0;i<n;i++)
   {
       if(i==sv)
       {
           continue;
       } 
       if(edges[sv][i]==1)
       {
           if(visited[i]==1)
           {
               continue;
           }
           printDFS(edges,n,i,visited);

       }
   }

}
void printBFS(int **edges,int n,int sv,bool* visted)
{
    queue<int> pendingvertices;
    bool *visited=new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    pendingvertices.push(sv);
    visited[sv]=true;
    while(!pendingvertices.empty())
    {
        int currentvertex=pendingvertices.front();
        pendingvertices.pop();
        cout<< currentvertex<<endl;
        for(int i=0;i<n;i++)
        {
            if(i==currentvertex)
            {
                continue;
            }
            if(edges[currentvertex][i]==1 && !visited[i])
            {
                pendingvertices.push(i);
                visited[i]=true;

            }
        }

    }
    delete [] visited;
}
void BFS(int **edges,int n)
{
    bool *visited=new bool[n];
for(int i=0;i<n;i++)
{
    visited[i]=false;
}
for(int i=0;i<n;i++)
{
    if(!visited[i])
    {
        printBFS(edges,n,i,visited);


    }
    delete [] visited;

}
void DFS(int **edges,int n)
{
bool *visited=new bool[n];
for(int i=0;i<n;i++)
{
    visited[i]=false;
}
for(int i=0;i<n;i++)
{
    if(!visited[i])
    {
        printDFS(edges,n,i,visited);


    }
    delete [] visited;

}
}
int main()
{
    int n;
    int e;
    cin>>n>>e;
    int ** edges=new int*[n];
    for(int i=0;i<n;i++)
    {
        edges[i]=new int[n];
    
    for(int j=0;j<n;i++)
    {
        edges[i][j]=0;
    }
    }
    for(int i=0;i<e;i++)
    {
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    bool* visited=new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
    }
    DFS(edges,n);
    BFS(edges,n);


}