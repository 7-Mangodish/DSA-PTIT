#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int V,E;
vector <ii>v; 
int par[1005], sz[1005];

void ktao(){
	v.clear();
	cin >>V >>E;
	for(int i=1; i<=E; i++){
		int x,y;
		cin >>x >>y;
		v.push_back({x,y});
	}
}

void Init(){
	 for(int i=1; i<=V; i++){
	 	par[i]=i;
	 	sz[i]=1;
	 }
}

int Find(int u){
	if(u==par[u])
		return u;
	return par[u]=Find(par[u]);
}

bool Union(int x, int y){
	x=Find(x);
	y=Find(y);
	if(x==y)
		return false;
	if(sz[x] <sz[y])
		swap(x,y);
	par[y]=x;
	sz[x]+=sz[y];
	return true;
}

bool sol(){
	for(auto x:v){
		if(!Union(x.first, x.second)){
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
		Init();
		if(sol())
			cout <<"YES";
		else
			cout <<"NO";
		cout <<endl;
	}
}
