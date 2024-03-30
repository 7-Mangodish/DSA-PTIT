#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int V,E,u;
vector <int> e[1005];
vector <int> ans;
bool used[1005];

void BFS(int u){
	queue<int> q;
	q.push(u);
	used[u]=true;
	while(!q.empty()){
		int tmp=q.front();
		q.pop();
		ans.push_back(tmp);
		for(auto x:e[tmp]){
			if(!used[x]){
				used[x]=true;
				q.push(x);
			}
		}
	}
	for(auto x:ans)
		cout <<x <<" ";
	cout <<endl;
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
		BFS(u);
	}
}
