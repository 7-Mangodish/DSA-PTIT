#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n,m;
vector <int> v[1005];
bool used[1005];

void ktao(){
	cin >> n >>m;	
	memset(used, false, sizeof used);
	for(int i=1; i<=n; i++)
		v[i].clear();
		
	int a[m*2];
	for(auto &x:a)
		cin >>x;
	for(int i=0; i<m*2; i+=2){
		v[a[i]].push_back(a[i+1]);
		v[a[i+1]].push_back(a[i]);
	}
}

void DFS(int u){
	used[u]=true;
	for(auto x:v[u]){
		if(!used[x]){
			DFS(x);
		}
	}
}

int comp(){
	int cnt=0; 
	for(int i=1; i<=n; i++){
		if(!used[i]){
			++cnt;
			DFS(i);
		}
	}
	return cnt;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		cout <<comp() <<endl;
	}
}
