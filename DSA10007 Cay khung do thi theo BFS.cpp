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

void BFS(int u){
	queue<int> q;
	q.push(u);
	used[u]=true;
	while(!q.empty()){
		int t=q.front();
		q.pop();
		for(int v:e[t]){
			if(!used[v]){
				ans.push_back({t,v});
				used[v]=true;
				q.push(v);
			}
		}
	}
	if(ans.size()!=V-1){
		cout <<-1 <<endl;
	}
	else{
		for(auto x:ans){
			cout <<x.first <<" " <<x.second <<endl;
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		BFS(u);
	}
}
