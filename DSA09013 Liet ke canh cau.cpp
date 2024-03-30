#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int n,m;
vector <int> v[1005];
vector <pair<int, int> > e;
vector <string> ans;
bool used[1005];

void ktao(){
	cin >>n >>m;
	for(int i=1; i<=m; i++){
		int x,y;
		cin >>x >>y;
		v[x].push_back(y);
		v[y].push_back(x);
		e.push_back({x,y});
	}
	memset(used, false, sizeof used);
//	for(int i=1; i<=n; i++)
//		sort(v[i].begin(), v[i].end());
}

void DFS(int u, int s, int t){
	used[u]=true;
	for(auto x:v[u]){
		if((u==s && x==t) || (u==t && x==s))
			continue;
		if(!used[x])
			DFS(x,s,t);			
	}
}

void sol(){

	int tmp=0;
	for(int i=1; i<=n; i++){
		if(!used[i]){
			++tmp;
			DFS(i,0,0);
		}
	}
	
	// xet tung canh
	for(auto x:e){
		memset(used, false, sizeof used);
		int cnt=0;
		for(int i=1; i<=n; i++){
			if(!used[i]){
				++cnt;
				DFS(i,x.first, x.second);
			}
		}
		if(cnt >tmp){
//			string str=to_string(x.first)+" "+to_string(x.second);
//			ans.push_back(str);
			cout <<x.first <<" " <<x.second << ' ';
		}			
	}
	sort(ans.begin(), ans.end());
	for(auto x: ans)
		cout <<x <<" ";
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ans.clear();
		e.clear();
		for(int i=1; i<=n; i++)
			v[i].clear();		
		ktao();
		sol();
		cout <<endl;
	}
}
