#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
vector <int> vt[1005];
bool used[1005];
vector <int> ans;

void bfs(int u){
	while(ans.size()!=0){
		int tmp=ans.front();
		cout <<tmp <<" ";
		ans.erase(ans.begin());
		for(auto x:vt[tmp]){
			if(!used[x]){
				ans.push_back(x);
				used[x]=true;
			}
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		memset(used, false, sizeof(used));
		for(int i=1; i<1005; i++){
			vt[i].clear();
		}
		int v,e,u;
		cin >>v >>e >>u;
		int a[e*2];
		for(int &x:a)	
			cin >>x;
		for(int i=0; i<2*e; i+=2){
			vt[a[i]].push_back(a[i+1]);
			vt[a[i+1]].push_back(a[i]);
		}
		ans.push_back(u);
		used[u]=true;
		bfs(u);
		cout <<endl;
	}
}
