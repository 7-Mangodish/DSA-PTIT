#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int V,E;
vector <int> e[1005];
int sta[1005];
void ktao(){
	cin >>V >>E;
	for(int i=1; i<=V; i++){
		e[i].clear();	
	}
	memset(sta, 0, sizeof sta);
	for(int i=1; i<=E; i++){
		int x,y;
		cin >>x >>y;
		e[x].push_back(y);
	}
}

bool DFS(int u){
	sta[u]=1;
	for(int v:e[u]){
		if(sta[v]==1)
			return true;
		if(sta[v]==0){
			if(DFS(v))
				return true;
		}
	}
	sta[u]=2;
	return false;
}

bool sol(){
	for(int i=1; i<=V; i++){
		if(sta[i]==0){
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
