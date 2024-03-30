#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int n,m;
vector<ii> e[1005];
int d[1005]; // d[u]: luu trong so cua canh nho nhat ma ke voi u
int par[1005];
bool used[1005];

struct adj{
	int x,y,w;	
};
void ktao(){
	cin >>n >>m;
	for(int i=1; i<m; i++){
		int x,y,w;
		cin >>x >>y >>w;
		e[x].push_back({y,w});
		e[y].push_back({x, w});		
	}
	memset(used, false, sizeof used);
	for(int i=1 ;i<=n; i++)
		d[i]=INT_MAX;
}

void Prim(int s){
	priority_queue<ii, vector<ii>, greater<ii>> q;// luu {trong so, dinh}
	vector <adj> ans;// luu canh 
	used[s]=true;
	int res=0;
	q.push({0, s});
	while(!q.empty()){
		// lay dinh co trong so nho nhat trong hang doi
		ii t=q.top(); q.pop();
		int u=t.second, w=t.first;
		// Neu no da o trong tap MST thi k can xet
		if(used[u])
			continue;
		// Neu dinh dang xet khac dinh cha thi day vao ans
		if(u!=s){
			ans.push_back({u, par[u], w});
		}
		res+=w;
		used[u]=true;
		for(ii v:e[u]){
			int u1=v.first, // xet dinh ke voi dinh u
			w1=v.second;
			if(!used[u1] && w1<d[u1]){
				d[u1]=w1;
				par[u1]=u;
				q.push({w1, u1});
			}
		}
	}
	cout <<res <<endl;
	for(adj i:ans){
		cout <<i.x <<" " <<i.y <<" " <<i.w <<endl;
	}
}

int main(){
	ktao();
	Prim(1);
}
/*

Input:
6 9 
1 2 9 
1 3 4 
2 3 1
2 4 6
3 5 2
4 5 3
4 6 10
5 6 8
*/