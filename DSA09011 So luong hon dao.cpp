#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n,m;
int dx[8]={-1, -1, -1, 0, 0, 1, 1, 1},
dy[8]={-1, 0, 1, -1, 1, -1, 0, 1};
int a[1005][1005];
void ktao(){
	cin >> n >>m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >>a[i][j];
		}
	}
}

void BFS(int i, int j){
	a[i][j]=0;
	queue <ii> q;
	q.push({i,j});
	while(!q.empty()){
		ii t=q.front();
		q.pop();
		for(int i=0; i<8; i++){
			int r=t.first + dx[i],
			c=t.second+dy[i];
			if(r >=1 && r<=n && c>=1 && c<=m && a[r][c]==1){
				a[r][c]=0;
				q.push({r,c});
			}
		}
	}
}

int sol(){
	int cnt=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(a[i][j]==1){
				++cnt;
				BFS(i,j);
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
		cout <<sol() <<endl;
	}
}
