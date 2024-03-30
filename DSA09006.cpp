#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
// Duyet so canh cau
using namespace std;
set<int> s[1005];
//Mang danh dau duoc phep dung hay khong
bool visited[1005];		
int v,e;

void dfs(int u){
	visited[u]=false;
	for(auto x:s[u]){
		if(visited[x]){
			dfs(x);
		}
	}
}

int comp(){ 		
	int cnt=0; // So thanh phan lien thong
	for(int i=1; i<=v; i++){
		if(visited[i]){
			++cnt;
			dfs(i);
		}
	}
	return cnt;
}

void solve(){
	int before=comp();	
	for(int i=1; i<=v; i++){
		for(auto x:s[i]){
			memset(visited, true, sizeof(visited));
			s[i].erase(x);
			s[x].erase(i);
			int after =comp();
			if(after!=before)
				cout <<i <<" " <<x<<"\n";
			s[i].insert(x);
			s[x].insert(i);
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){	
		cin >>v >>e;
		memset(visited, true, sizeof(visited));
		for(int i=1; i<=e; i++){
			int x, y;
			cin >>x>>y;
			s[x].insert(y);
			s[y].insert(x);
		}
//		cout <<comp();
		solve();
//		cnt=0;
	}
}
/*
10 8
1 2
2 3
2 4
3 6
3 7
6 7
5 8
8 9


1

5 5

1 2 

1 3

2 3

2 5

3 4

out:
2 5 3 4
*/