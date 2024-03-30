#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int V,E, s, t;
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
		e[y].push_back(x);
	}
	memset(used, false, sizeof used);
	par[s]=s;
}

void BFS(int u){
	queue <int> q;
	q.push(u);
	used[u]=true;
	while(!q.empty()){
		int s=q.front();
		q.pop();
		for(int v:e[s]){
			if(!used[v]){
				used[v]=true;
				par[v]=s;
				q.push(v);
			}
		}
	}
}

void sol(){
	BFS(s);
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
