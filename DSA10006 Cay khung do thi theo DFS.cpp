#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int V,E,u;
vector <int> e[1005];
bool used[1005];
vector <ii> ans;
void ktao(){
	cin >> V >>E >>u;
	ans.clear();
	for(int i=1; i<=V; i++)
		e[i].clear();
	for(int i=1; i<=E; i++){
		int x,y;
		cin >>x >>y;
		e[x].push_back(y);
		e[y].push_back(x);
	}
	memset(used, false, sizeof used);
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
	int t;
	cin >>t;
	while(t--){
		ktao();
		DFS(u);
		if(ans.size()!=V-1){
			cout <<-1;		
			cout <<endl;	
		}
		else{
			for(auto x:ans)
				cout <<x.first <<" " <<x.second << endl;
		}
	}
}
