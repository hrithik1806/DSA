
   
#include <bits/stdc++.h>
using namespace std;

vector<int>* getPathBFS(int** graph,bool* visited, int sv, int ev, int V ){
    if(sv==ev){
        visited[sv]=true;
        vector<int>* output=new vector<int>;
        output->push_back(sv);
        return output;
    }
    queue<int> q;
    unordered_map<int, int> map;
    q.push(sv);
    visited[sv]=true;
    map[sv]=-1;
    bool done=false;
    while(!q.empty() && !done){
        int temp = q.front();
        q.pop();
        for(int i=0;i<V;i++){
            if(graph[temp][i]==1 && !visited[i] && temp!=i){
                map[i]=temp;
                q.push(i);
                visited[i]=true;
                if(i==ev){
                    done=true;
                    break;
                }
            }
        }
    }
    vector<int>* output=new vector<int>;
    //Get path from map in vector
    if(done){
    for(int i=ev;i!=-1;){
        output->push_back(i);
        i=map.at(i);
    }
    return output;
    }
    else{
        return NULL;
    }
}
int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;
    int** graph = new int*[V];
    for(int i=0;i<V;i++){
        graph[i]=new int[V];
        for(int j=0;j<V;j++){
            graph[i][j]=0;
        }
    }
    for(int i=0;i<E;i++){
        int sv, ev;
        cin>>sv>>ev;
        graph[sv][ev]=1;
        graph[ev][sv]=1;
    }
    bool* visited = new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    int s=0,e=0;
    cin>>s>>e;
    vector<int>* path = getPathBFS(graph, visited, s, e, V);
    if(path!=NULL){
    vector<int>::iterator itr;
    for(itr=path->begin();itr!=path->end();itr++){
        cout<<*itr<<" ";
    }
    }    
  return 0;
}
