#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int n,m;
vector <int> v[1005];
bool used[1005];
void ktao(){
	cin >>n >>m;
	int a[m*2];
	for(int i=0; i<m*2; i++)
		cin >>a[i];
	
	memset(used, false, sizeof used);
	for(int i=1; i<=n; i++)
		v[i].clear();
	for(int i=0; i<m*2; i+=2){
		v[a[i]].push_back(a[i+1]);
		v[a[i+1]].push_back(a[i]);		
	}

}

int BFS(){
	queue <int> q;
	int cnt=0;
	for(int i=1; i<=n; i++){
		if(!used[i]){
			++cnt;
			q.push(i);
			used[i]=true;
			while(!q.empty()){
				int tmp=q.front();
				q.pop();
				for(int x:v[tmp]){
					if(!used[x]){
						used[x]=true;
						q.push(x);
					}
				}
			}
		}
	}
	return cnt;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		cout <<BFS() <<endl;
	}
}
