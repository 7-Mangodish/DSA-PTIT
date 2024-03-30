#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
// DO thi vo huong
// chu trinh euler khi:
//	cac dinh co bac khac 0 thuoc 1 tplt
//	bac cac dinh co bac chan
//
//duong di euler khi:
//	co 0 hoac 2 dinh bac le
vector <int> v[1005];
bool used[1005];
int n,m;

void DFS(int u){
	used[u]=true;
	for(auto x:v[u]){
		if(!used[x])
			DFS(x);
	}
}

int sol(){
	int tplt=0;
	for(int i=1; i<=n; i++){
		if(!used[i]){
			++tplt;
			DFS(i);
		}
	}	
	if(tplt!=1)
		return 0;
	int cnt=0;
	for(int i=1; i<=n; i++){
		if(v[i].size()%2!=0){
			++cnt;
		}
	}
	if(cnt==0)
		return 2;
	if(cnt==2)
		return 1;
	return 0;
}
int main(){
	int t;
	cin >>t;
	while(t--){

		cin >>n >>m;
		int a[m*2];
		
		memset(used, false, sizeof used);
		for(int &x:a)
			cin >>x;
		for(int i=0; i<m*2; i+=2){
			v[a[i]].push_back(a[i+1]);
			v[a[i+1]].push_back(a[i]);
		}
	 	
		cout <<sol() <<endl;
		for(int i=1; i<=n; i++)
			v[i].clear();
	}
}
