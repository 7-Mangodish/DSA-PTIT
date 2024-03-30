#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
// Do thi co huong
//Co chu trinh khi
//	cac dinh co bac khac 0 thuoc 1 thanh phan lien thong
//	ban bac vao = ban bac ra cua cac dinh
//Co duong di khi
//	cac dinh co bac khac 0 thuoc 1 thanh phan lien thong	
//	ton tai 2 dinh co deg+ - deg-==1 va nguoc lai
int n,m;
vector <int> v[1005];
bool used[1005];
void DFS(int u){
	used[u]=true;
	for(auto x:v[u]){
		if(!used[x])
			DFS(x);
	}
}

int  sol(int deg[]){
	int  tplt=0;
	for(int i=1; i<=n; i++){
		if(!used[i]){
			++tplt;
			DFS(i);
		}
	}
	if(tplt !=1)
		return 0;
	for(int i=1; i<=n; i++){
		if(deg[i]!=0)
			return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>m;
		int a[m*2];
		int deg[1005];// tinh hieu so cua ban bac ra va ban bac vao
		memset(deg, 0, sizeof deg);
		memset(used, false, sizeof used);
		for(int &x:a)
			cin >>x;
		for(int i=0; i<m*2; i+=2){
			v[a[i]].push_back(a[i+1]);
			deg[a[i]]++;
			deg[a[i+1]]--;
		}
	 	
//	 	for(int i=1; i<=n; i++)
//	 		cout <<deg[i] <<" ";
//	 	cout <<endl;
		cout <<sol(deg) <<endl;
		for(int i=1; i<=n; i++)
			v[i].clear();
		
	}
}
