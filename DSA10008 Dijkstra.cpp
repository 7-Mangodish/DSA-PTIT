#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int V, E, u;
vector <ii> e[1005];
void ktao(){
	cin >> V >>E >>u;
	for(int i=1; i<=V; i++)
		e[i].clear();
	for(int i=1; i<=E; i++){
		int x, y, w;
		cin >> x>>y >>w;
		e[x].push_back({y,w});
		e[y].push_back({x,w});
	}
}
// tu tuong: ban dau gan duong di ngan nhat tu dinh nguon den cac dinh con lai la vo cung
// day dinh s vao hang doi uu tien; hang doi uu tien luu pair(d,u): khoang cach ngan nhat tu dinh nguon toi dinh dang xet
// lay phan tu o dinh va thuc hien thao tac relax
// relax: xet cac dinh ke v voi dinh dang xet xem lieu duong di thong qua dinh u dang xet co ngan hon d[v] hay khong
void Dijkstra(int s){
	// priority_queue : luu cac cap pair<d,u>(khoang cach d ngan nhat tinh tu dinh nguon s den u
	priority_queue<ii, vector<ii>, greater<ii>> q;
	q.push({0, s});
	vector <int> d(V+1, mod);
	d[s]=0;
	while(!q.empty()){
		auto t=q.top();
		q.pop();	
		int u=t.second,
		dis=t.first; 
		if(dis>d[u]) continue;
		for(auto tmp:e[u]){
			int v=tmp.first, 
			w=tmp.second;
			if(d[v]> d[u]+w){
				d[v]=d[u]+w;
				q.push({d[v],v});
			}
		}
	}
	for(int i=1;i<=V; i++)
		cout <<d[i] <<" ";
	cout <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		Dijkstra(u);
	}
}
