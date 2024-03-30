#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int V,E,s,t;
vector <int> e[1005];
bool used[1005];
int par[1005];
void ktao(){
	cin >> V >>E >>s >>t;
	for(int i=1; i<=V; i++)
		e[i].clear();
	for(int i=0; i<E; i++){
		int x,y;
		cin >>x >>y;
		e[x].push_back(y);
	}
	memset(par, 0, sizeof par);
	memset(used, false, sizeof used);
	par[s]=s;
}

void DFS(int u){
	used[u]=true;
	for(auto v:e[u]){
		if(!used[v]){
			par[v]=u;
			DFS(v);
		}
	}
}
void sol(){
	DFS(s);
	if(!used[t]){
		cout <<-1;
		return;
	}

	vector <int> ans;
	while(s!=t){
		ans.push_back(t);
		t=par[t];
	}
	ans.push_back(t);
	for(int i=ans.size()-1; i>=0; i--)
		cout <<ans[i] <<" ";
}

int main(){
	int q;
	cin >>q;
	while(q--){
		ktao();
		sol();
		cout <<endl;
	}
}
