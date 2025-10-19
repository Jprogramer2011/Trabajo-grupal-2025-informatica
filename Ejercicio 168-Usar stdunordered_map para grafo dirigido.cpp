// Ejercicio 968 - Usar std::unordered_map para grafo dirigido
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m; cin >> m;
    unordered_map<int, vector<pair<int,int>>> grafo;
    for(int i=0;i<m;++i){
        int u,v,w; cin>>u>>v>>w;
        grafo[u].push_back({v,w});
    }
    for(auto &p: grafo){
        cout<<p.first<<": ";
        for(auto &e: p.second) cout<<"("<<e.first<<","<<e.second<<") ";
        cout<<"\n";
    }
    return 0;
}