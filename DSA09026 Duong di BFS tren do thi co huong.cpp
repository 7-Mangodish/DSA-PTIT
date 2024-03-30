#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n, m, s, t;
vector <int> v[1005];
bool used[1005];
int par[1005];
void ktao(){
	cin >>n >>m >>s >>t;
	for(int i=1; i<=n; i++)
		v[i].clear();
	for(int i=1; i<=m; i++){
		int x,y;
		cin >>x >>y;
		v[x].push_back(y);
	}
	memset(used, false, sizeof used);
	par[s]=s;
}

void BFS(int s){
	queue <int> q;
	q.push(s);
//	cout <<s <<" ";
	used[s]=true;
	
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int x:v[u]){
			if(!used[x]){
				used[x]=true;
				par[x]=u;
				q.push(x);
			}
		}
	}
}

void sol(){
	BFS(s);
	if(!used[t]){
		cout <<-1; 
		return ;
	}
	vector <int> ans;
	while(t!=s){
		ans.push_back(t);
		t=par[t];
	}
	ans.push_back(t);
	for(int i=ans.size()-1; i>=0; i--)
		cout <<ans[i] <<" ";
}

int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		sol();
		cout <<endl;
	}
}
