#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
struct adj{
	int x,y,w;
};
int V,E;
vector <adj> e;
int par[1005], sz[1005];
void ktao(){
	cin >> V >>E;
	e.clear();
	for(int i=0; i<E; i++){
		adj tmp;
		cin >>tmp.x >> tmp.y >> tmp.w;
		e.push_back(tmp);
	}
}

void Init(){
	for(int i=1; i<=V; i++){
		par[i]=i;
		sz[i]=1;
	}
}

int Find(int u){
	if(par[u]==u)
		return u;
	return par[u]=Find(par[u]);
}

bool Union(int x, int y){
	x=Find(x);
	y=Find(y);
	if(x==y)
		return false;
	if(sz[x]<sz[y])
		swap(x,y);
	par[y]=x;
	sz[x]+=sz[y];
	return true;
}

bool cmp(adj a, adj b){
	return a.w<b.w;
}

void Kruscal(){
	ktao();
	Init();
	// sap xep cac canh theo thu tu trong so
	sort(e.begin(), e.end(), cmp);
	int d=0;
	for(auto edge:e){
		if(Union(edge.x, edge.y)){
			d+=edge.w;
		}
	}
	cout <<d <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		Kruscal();
	}
}
