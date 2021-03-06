#include <iostream>
#include<queue>
using namespace std;

bool hasPath(int **edge,int n,int s,int e){
    if(s==e)
        return true;
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.size()){
        int a = q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(edge[a][i]==1 && !visited[i]){
                if(i==e){
                return true;
            }
                q.push(i);
                visited[i]=true;
            }
        }
    }
    // delete visited array
    delete [] visited;
    
    return false;
}

int main() {
    
    int n, e;
    cin >> n >> e;
    int **edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++)
            edges[i][j]=0;
    }
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    int st,en;
    cin>>st>>en;
     
    if(hasPath(edges,n,st,en)==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    //delete 2d array edges
    
    for(int i = 0 ; i < n ; i++){
        delete[] edges[i];
    }
    delete [] edges;
}