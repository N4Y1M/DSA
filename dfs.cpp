#include<bits/stdc++.h>
using namespace std;

void dfs(int start,vector<vector<int>>& adj,int nodes){
    vector<bool>visited(nodes,false);
    stack<int>s;
    s.push(start);
    while(!s.empty()){
        int current = s.top();
        s.pop();
        if(!visited[current]){
            cout<<current<<" ";
            visited[current]=true;
        }

        for(int i=adj[current].size()-1;i>=0;i--){
            int neighbour=adj[current][i];
            if(!visited[neighbour]){
                s.push(neighbour);
            }
        }
    }
}
int main(){

    int nodes=5;
    vector<vector<int>>adj(nodes);
    adj[0]={1,2};
    adj[1]={0,3,4};
    adj[2]={0};
    adj[3]={1};
    adj[4]={1};
    cout<<"Traversal started from node 0 : ";
    dfs(0,adj,nodes);



}
