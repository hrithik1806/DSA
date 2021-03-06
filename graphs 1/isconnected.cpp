
   
#include <iostream>
using namespace std;

void isConnected(int **edge, int n, int sv,bool* visited){
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(i==sv)
            continue;
        if(edge[sv][i] && !visited[i]){
            visited[i]=true;
            isConnected(edge,n,i,visited);
        }
    }
}

int main() {
    int n,e;
    cin>>n>>e;
    int **edge = new int*[n];
    for(int i=0;i<n;i++){
        edge[i] = new int[n];
        for(int j=0;j<n;j++){
            edge[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edge[f][s]=1;
        edge[s][f]=1;
    }
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    isConnected(edge,n,0,visited);
    int flag = 1;
    for(int i=0;i<n;i++){
        if(visited[i]==false)
            flag=0;
    }
    if(flag==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }

}
