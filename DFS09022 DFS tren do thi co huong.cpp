#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int V,E,u;
vector <int> e[1005];
vector <int> ans;
bool used[1005];

void DFS(int u){
	used[u]=true;
	ans.push_back(u);
	for(auto x:e[u]){
		if(!used[x])
			DFS(x);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>V >>E >>u;
		memset(used, false, sizeof used);
		for(int i=1; i<=V; i++)
			e[i].clear();
		ans.clear();
		vector <int> v;
		
		for(int i=0; i<2*E; i++){
			int tmp;
			cin >>tmp;
			v.push_back(tmp);
		}
		for(int i=0; i<2*E; i+=2){
			e[v[i]].push_back(v[i+1]);
		}
		
		DFS(u);
		for(auto x:ans)
			cout <<x <<" ";
		cout <<endl;
	}
}
