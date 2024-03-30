#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n,m;
vector <int> e[1005];
bool used[1005], par[1005];
int endp;
bool ok;
void ktao(){
	cin >>n >>m;
	for(int i=1; i<=n; i++)
		e[i].clear();
	for(int i=1; i<=m; i++){
		int x,y;
		cin >>x >>y;
		e[x].push_back(y);
		e[y].push_back(x);
	}
	memset(used, false, sizeof used);
	par[1]=1;
	ok=false;
}

void DFS(int u){
	cout <<u <<endl;
	cout <<par[u] <<endl;
	used[u]=true;
	for(auto v:e[u]){
		if(ok)
			return ;
		if(!used[v]){	
			par[v]=u;
			DFS(v);
		}
		else{
			if(par[u]!=v){
				endp=u;
				ok=true;
				return;				
			}
		}
	}
}

void sol(){
	DFS(1);
//	else{
		vector<int> ans;
		while(endp!=1){
			ans.push_back(endp);
			endp=par[endp];
		}
		ans.push_back(endp);
		for(int i=ans.size()-1; i>=0; i--){
			cout <<ans[i] <<" ";			
		}
//	}
//	cout <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		sol();
	}
}
