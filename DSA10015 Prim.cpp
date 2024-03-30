#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int n, m;
vector <ii> e[1005];
bool used[1005];
//true: thuoc tap MST
//false: thuoc tap V
void ktao(){
	cin >>n >>m;
	for(int i=1; i<=n; i++)
		e[i].clear();
	for(int i=1; i<=m; i++){
		int x,y,w;
		cin >>x >>y >>w;
		e[x].push_back({y,w});
		e[y].push_back({x,w});
	}
	memset(used, false, sizeof used);
}

void Prim(int i){
	// queue : luu {trong so, dinh}
	priority_queue <ii, vector <ii>, greater<ii>> q;
	int d=0;
	used[i]=true;
	
	// Dua cac dinh ke voi dinh u vao hang doi
	for(ii v:e[i]){
		if(!used[v.first]){
			q.push({v.second, v.first});
		}
	}
	while(!q.empty()){
		ii t=q.top();
		q.pop();
		int u=t.second,
		w=t.first;
		// kiem tra xem dinh u da nam trong tap MST hay chua
		
		if(!used[u]){
			used[u]=true;
			d+=w;
			for(auto v:e[u]){
				if(!used[v.first]){
					q.push({v.second, v.first});
				}
			}
		}
	}
	cout <<d <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		Prim(1);
	}
}
