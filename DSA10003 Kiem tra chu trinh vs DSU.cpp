#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n,m;
vector <ii> e;
int par[1005], sz[1005];
bool ok;
void ktao(){
	ok=false;
	e.clear();
	cin >>n >>m;
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

void  Union(int x, int y){
	x=Find(x);
	y=Find(y);
	if(x==y){
		ok=true;
		return;
	}
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
		if(ok)
			cout <<"YES";
		else
			cout <<"NO";
		cout <<endl;	
	}
}
