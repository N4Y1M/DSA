#include<bits/stdc++.h>
using namespace std;
void bfs(int start,vector<vector<int>>&adj,int node){
    vector<bool>visited(node,false);
    visited[start]=true;
    queue<int>q;
    q.push(start);
    while(!q.empty()){
       int current=q.front();
       q.pop();
       cout<<current<<" ";
       for(int nei:adj[current]){
        if(!visited[nei]){
            visited[nei]=true;
            q.push(nei);
        }
       }

    }
}
int main(){
    int node=5;
    vector<vector<int>>adj(node);
    adj[0]={1,2};
    adj[1]={0,3,4};
    adj[2]={0};
    adj[3]={1};
    adj[4]={1};
    bfs(0,adj,node);
}
