#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n,m;
vector <int> v[1005];
bool used[1005];
int par[1005];
int cnt;
void ktao(){
	cnt=0;
	cin >>n >>m;
	for(int i=1; i<=n; i++)
		v[i].clear();
	for(int i=1; i<=m; i++){
		int x,y;
		cin >> x >>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(par, 0, sizeof par);
	memset(used, false, sizeof used);
}

void DFS(int u){
	used[u]=true;
	par[u]=cnt;
	for(auto x:v[u]){
		if(!used[x])
			DFS(x);
	}	
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		for(int i=1; i<=n; i++){
			if(!used[i]){
				++cnt;
				DFS(i);
			}
		}
		int q;
		cin >>q;
		while(q--){
			int x,y;
			cin >>x >>y;
			if(par[x]==par[y])
				cout <<"YES\n";
			else
				cout <<"NO\n";
		}
	}
}
