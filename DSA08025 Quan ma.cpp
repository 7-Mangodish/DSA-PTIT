#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int dx[8]={-1, -2, -2, -1, 1, 2, 2, 1},
dy[8]={-2, -1, 1, 2, -2, -1, 1, 2};
bool used[30][30];
int f[30][30];
ii sol(string s){
	char c1=s[0],
	c2=s[1];
	int col=c1-96,
	row=c2-'0';
	row=8-row+1;
	return {row, col};
}

int main(){
	int t;
	cin >>t;
	while(t--){
		string st, en;
		cin >>st >>en;
		ii s=sol(st),
		e=sol(en);
		
		memset(f, 0, sizeof f);
		memset (used, false, sizeof used);
		queue<ii> q;
		q.push(s);
		used[s.first][s.second]=true;
		
		while(!q.empty()){
			ii t=q.front(); q.pop();
			for(int i=0; i<8; i++){
				int r=t.first+dx[i],
				c=t.second+dy[i];
				if(!used[r][c] && r>=1 && r<=8 && c<=8 && c>=1){
					f[r][c]=f[t.first][t.second]+1;
					used[r][c]=true;
					q.push({r,c});
				}
			}
		}
		cout <<f[e.first][e.second];
	}
}
