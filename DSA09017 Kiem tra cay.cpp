#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int par[1005], sz[1005];
vector<ii> v;
int n;

void ktao(){
	cin >>n;
	v.clear();
	for(int i=0; i<n-1; i++){
		int x,y;
		cin >>x >>y;
		v.push_back({x,y});
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

bool sol(){
	ktao();
	Init();
	for(auto x:v){
		if(!Union(x.first,x.second))
			return false;
	}
	return true;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		if(sol())
			cout <<"YES";
		else
			cout <<"NO";
		cout <<endl;
	}
}
