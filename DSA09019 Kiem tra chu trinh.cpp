#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int V,E;
vector  <int> e[1005];
bool used[1005];
int par[1005];
void ktao(){
	cin >> V >>E;
	for(int i=1 ;i<=V; i++)
		e[i].clear();
	for(int i=0; i<E; i++){
		int x,y;
		cin >>x >>y;
		e[x].push_back(y);
		e[y].push_back(x);
	}
	memset(used, false, sizeof used);
	par[1]=1;
}

bool DFS(int u){
	used[u]=true;
	for(int v:e[u]){
		if(!used[v]){
			par[v]=u;
			if(DFS(v))
				return true;
		}
		else{
			if(v!=par[u])
				return true;
		}
	}
	return false;
}

bool sol(){
	for(int i=1; i<=V; i++){
		if(!used[i]){
			if(DFS(i))
				return true;
		}
	}
	return false;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		if(sol())
			cout <<"YES";
		else
			cout <<"NO";
		cout <<endl;
	}
}
