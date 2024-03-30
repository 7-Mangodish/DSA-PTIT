#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n,m;
vector<ii> e[1005];
int par[1005];
void ktao(){
	cin >>n >>m;
	for(int i=1; i<=m; i++){
		int x,y,w;
		cin >>x >>y >>w;
		e[x].push_back({y,w});
//		e[y].push_back({x,w});
	}
}

void Dijiktra(int u){
	priority_queue<ii, vector <ii>, greater<ii>> q;
	vector <int> d(n+1, mod);
	d[u]=0;
	par[u]=u;
	q.push({d[u], u});
	while(!q.empty()){
		ii t=q.top(); q.pop();
		int u=t.second,
		kc=t.first;
		if (kc>d[u])
			continue;
		for(ii tmp:e[u]){
			int v=tmp.first,
			w=tmp.second;
			if(d[v] >d[u]+w){
				d[v]=d[u]+w;
				par[v]=u;
				q.push({d[v], v});
			}
		}
	}
	for(int i=1; i<=n; i++)
		cout <<d[i] <<" ";
}
int main(){
	ktao();
	Dijiktra(1);

}
