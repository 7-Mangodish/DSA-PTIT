#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n,m;
vector <int> v[1005], rev[1005];
bool used[1005];
stack <int> st;

void ktao(){
	cin >>n >>m;
	for(int i=1; i<=n; i++){
		v[i].clear();		
		rev[i].clear();
	}
	for(int i=0; i<m; i++){
		int x,y;
		cin >>x >>y;
		v[x].push_back(y);
		rev[y].push_back(x);
	}
	memset(used, false, sizeof used);
}

// Thu tu sap xep topo
void DFS1(int u){
	used[u]=true;
	for(int tmp:v[u]){
		if(!used[tmp]){
			DFS1(tmp);
		}
	}
	st.push(u);
}

// kiem tra tinh lien thong manh
void DFS2(int u){
	used[u]=true;
	for(int tmp:rev[u]){
		if(!used[tmp]){
			DFS2(tmp);
		}
	}
}

void Kosaraju(){
	ktao();
	for(int i=1; i<=n; i++){
		if(!used[i])
			DFS1(i);
	}
	memset(used, false, sizeof used);
	int cnt=0;
	while(!st.empty()){
		int t=st.top();
		st.pop();
		if(!used[t]){
			++cnt;
			DFS2(t);
		}
	}

//	cout <<cnt;
	if(cnt==1)
		cout <<"YES";
	else
		cout <<"NO";
	cout <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
//		ktao();
		Kosaraju();
		
	}
}
