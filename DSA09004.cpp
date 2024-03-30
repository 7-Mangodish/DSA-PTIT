#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int v,e,u;
vector <int> vt[1005];
bool used[1005];
void dfs(int u){
	used[u]=true;
	cout <<u <<" ";
	for(auto x:vt[u]){
		if(!used[x]){
			dfs(x);
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		memset(used, false, sizeof(used));
		for(int i=1; i<1005; i++)
			vt[i].clear();
		cin >> v>>e >>u;
		for(int i=1; i<=e; i++){
			int x,y;
			cin >>x >>y;
			vt[x].push_back(y);
			vt[y].push_back(x);
		}
		dfs(u);
		cout <<endl;
	}
}
