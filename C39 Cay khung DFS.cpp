#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int V,E,s;
vector <int> e[1005];
bool used[1005];
vector <ii> ans;
void ktao(){
	cin >> V >>E >>s;
	for(int i=1; i<=E; i++){
		int x,y;
		cin >> x>>y;
		e[x].push_back(y);
		e[y].push_back(x);
	}
	memset(used, false, sizeof used);
	for(int i=1; i<=V; i++)
		sort(e[i].begin(), e[i].end());
}

void DFS(int u){
	used[u]=true;
	for(int v:e[u]){
		if(!used[v]){
			ans.push_back({u,v});
			DFS(v);
		}
	}
}
int main(){
	ktao();
	DFS(s);
	for(auto x:ans){
		cout <<x.first <<"->" <<x.second <<endl;
	}
}
