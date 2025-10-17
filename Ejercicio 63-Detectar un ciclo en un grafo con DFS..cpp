#include <bits/stdc++.h>
using namespace std;
bool dfs_cycle(int u, const vector<vector<int>>& g, vector<int>& color){
    color[u]=1; // en pila
    for(int v: g[u]){
        if(color[v]==1) return true;
        if(color[v]==0 && dfs_cycle(v,g,color)) return true;
    }
    color[u]=2;
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<int>> g(n);
    for(int i=0;i<m;i++){ int u,v; cin>>u>>v; g[u].push_back(v); }
    vector<int> color(n,0);
    for(int i=0;i<n;i++){
        if(color[i]==0){
            if(dfs_cycle(i,g,color)){ cout<<1<<"\n"; return 0; }
        }
    }
    cout<<0<<"\n";
    return 0;
}