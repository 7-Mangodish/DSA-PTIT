#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int k,n,m;
vector <int> pos;
vector <int> e[1005];
bool used[1005];
int visited[1005];

void ktao(){
	cin >>k >>n >>m;
	for(int i=0; i<k; i++){
		int tmp;
		cin >>tmp;
		pos.push_back(tmp);
	}
	for(int i=1; i<=m; i++){
		int x,y;
		cin >>x >>y;
		e[x].push_back(y);
	}
	memset(visited, 0, sizeof visited);
	memset(used, false, sizeof used);
}

void DFS(int u){
	used[u]=true;
	visited[u]++;
	for(int v:e[u]){
		if(!used[v]){
			DFS(v);
		}
	}
}

int sol(){
	int cnt=0;
	for(int x: pos){
		memset(used, false, sizeof used);
		DFS(x);
	}
	for(int i=1; i<=n; i++){
		if(visited[i]==k)
			++cnt;
	}
	return cnt;
}
int main(){
	ktao();
	cout <<sol();
}
