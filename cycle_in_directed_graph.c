
/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/
#include<cstring>

void dfs(int s,int V,vector<int> adj[],bool visited[],int arr[],int dep[],int& time,bool &ans){
    arr[s]=time++;
    visited[s]=true;
    
    for(int i:adj[s]){
        if(!visited[i]){
            dfs(i,V,adj,visited,arr,dep,time,ans);
        }
        else{
            if(arr[i]<=arr[s]&&dep[i]==-1){
                ans=true;
            }
            
        }
    }
    dep[s]=time++;
    
}



bool isCyclic(int V, vector<int> adj[])
{
    // Your code here
    bool visited[V],ans=false;
    int arr[V],dep[V];
    memset(arr,-1,sizeof(arr));
    memset(dep,-1,sizeof(dep));
    memset(visited,false,sizeof(visited));
    int time=0;
    for(int i=0;i<V;i++){
        if(!visited[i]){
            dfs(i,V,adj,visited,arr,dep,time,ans);
        }
        
    }

    
    return ans;
}
