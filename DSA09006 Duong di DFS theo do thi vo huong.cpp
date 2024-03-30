#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int n,m, s, t;
vector <int> v[1005];
bool used[1005];
int par[1005];
void ktao(){
	cin >> n >>m >>s >>t;	
	memset(used, false, sizeof used);
	for(int i=1; i<=n; i++)
		v[i].clear();
	for(int i=1; i<=m; i++){
		int x, y;
		cin >> x >>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
}
void DFS(int u){
	used[u]=true;
	for(auto x:v[u]){
		if(!used[x]){
			par[x]=u;
			DFS(x);
		}
	}
}

void sol(){
	DFS(s);
	if(!used[t]){
		cout <<-1;
		return ;
	}
	vector <int> ans;
	while(t!=s){
		ans.push_back(t);
		t=par[t];
	}
	ans.push_back(t);
	for(int i=ans.size()-1; i>=0; i--)
		cout <<ans[i] <<" ";
	cout <<endl;
}
int main(){
	int q;
	cin >>q;
	while(q--){	
		ktao();
		sol();
	}
}
