#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n,m;

char a[1005][1005];
int dx[8]={-1, -1, -1, 0, 0, 1, 1, 1},
dy[8]={-1, 0, 1, -1, 1, -1, 0, 1};
void ktao(){
	cin >> n >>m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++)
			cin >>a[i][j];
	}
}

void bfs(int i, int j){
	queue <ii> q;
	q.push({i,j});
	a[i][j]='.';
	while(!q.empty()){
		ii t=q.front();
		q.pop();
//		cout <<t.first <<" " <<t.second <<" " <<endl;
		for(int k=0; k<8; k++){
			int r=t.first+dx[k],
			c=t.second+dy[k];
			if( r>=1 && r<=n && c>=1 && c<=m && a[r][c]=='W'){
				a[r][c]='.';
				q.push({r,c});
			}
		}
	}
}
int sol(){
	int cnt=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(a[i][j]=='W'){
				++cnt;
//				cout <<cnt <<endl;
				bfs(i,j);
			}
		}
	}
	return cnt;
}
int main(){
	ktao();
	cout <<sol();
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=m ;j++)
//			cout <<a[i][j];
//		cout <<endl;
//	}
}
