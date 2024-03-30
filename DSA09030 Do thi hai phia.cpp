#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int n,m;
vector <int> e[1005];
int col[1005];
bool used[1005];

void ktao(){
	cin >>n >>m;
	for(int i=1; i<=n; i++)
		e[i].clear();
	for(int i=1; i<=m; i++){
		int x, y;
		cin >>x >>y;
		e[x].push_back(y);
		e[y].push_back(x);
	}
	memset(used, false, sizeof used);
}

bool BFS(int  u){
	queue<int> q;
	used[u]=true;
	col[u]=1;
	q.push(u);
	while(!q.empty()){
		int t=q.front();
		q.pop();
		for(int v:e[t]){
			if(!used[v]){
				col[v]=(col[t]==1)?-1:1;
				used[v]=true;
				q.push(v);
			}
			else{
				if(col[v]==col[t])
					return false;
			}
		}
	}
	return true;
}

bool sol(){
	ktao();
	for(int i=1; i<=n; i++){
		if(!used[i]){
			if(!BFS(i))
				return false;
		}
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
