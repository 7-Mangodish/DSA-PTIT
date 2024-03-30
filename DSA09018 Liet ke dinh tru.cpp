#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int V,E;
vector <int> e[1005];
bool used[1005];
void ktao(){
	cin >>V >>E;
	for(int i=1; i<=V; i++)
		e[i].clear();
	for(int i=0; i<E; i++){
		int x,y;
		cin >>x >>y;
		e[x].push_back(y);
		e[y].push_back(x);
	}
	memset (used, false, sizeof used);
}

void DFS(int u){
	used[u]=true;
	for(int v:e[u]){
		if(!used[v])
			DFS(v);
	}
}

void sol(){
	
	for(int i=1; i<=V; i++){
		memset(used, false, sizeof used);
		used[i]=true;
		int cnt=0;
		for(int i=1; i<=V; i++){			
			if(!used[i]){
				++cnt;
				DFS(i);
			}
		}
		if(cnt >1)
			cout <<i <<" ";
	}
	cout <<endl;
}
int main(){
	int t;
	cin  >>t;
	while(t--){
		ktao();
		sol();
	}
}
