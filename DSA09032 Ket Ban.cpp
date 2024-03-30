#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n,m;
vector <ii> e;
int par[100005], sz[100005];
void ktao(){
	cin >>n >>m;
	e.clear();
	for(int i=1; i<=m; i++){
		int x,y;
		cin >>x >>y;
		e.push_back({x,y});
	}
}

void Init(){
	for(int i=1; i<=n; i++){
		par[i]=i;
		sz[i]=1;
	}
}

int Find(int u){
	if(u==par[u])
		return u;
	return par[u]=Find(par[u]);
}

void Union(int x, int y){
	x=Find(x);
	y=Find(y);
	if(x==y)
		return ;
	if(sz[x] <sz[y])
		swap(x,y);
	par[y]=x;
	sz[x]+=sz[y];
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		Init();
		for(auto x:e){
			Union(x.first, x.second);
		}
		cout <<*max_element(sz+1, sz+n+1);
		cout <<endl;
	}
}
