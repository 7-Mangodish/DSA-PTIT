#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int n,m;
int a[1005][1005];
int d[1005][1005];
void ktao(){
	cin >>n >>m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >>a[i][j];
			d[i][j]=mod;
		}
	}
	d[1][1]=0;
}


void sol(){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			//co duong di
			if(d[i][j]!=mod){
				if(i+a[i][j] <=n && j <=m){
					d[ i+a[i][j] ][j]=min(d[i+a[i][j]][j], d[i][j]+1 );
				}
				if(i<=n && j+a[i][j] <=m){
					d[i][j+a[i][j]]=min(d[i][ j+a[i][j] ], d[i][j]+1);
				}
			}
		}
	}
	if(d[n][m]==mod)
		cout <<-1;
	else
		cout <<d[n][m];
	cout <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		sol();
	}
}
