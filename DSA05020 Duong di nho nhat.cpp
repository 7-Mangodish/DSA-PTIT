#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,m;
		cin >>n >>m;
		int a[n+5][m+5];
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >>a[i][j];
			}
		}
		int f[n+5][m+5];
		for(int i=1; i<=n; i++)
			f[i][0]=mod;
		for(int i=1; i<=m; i++)
			f[0][i]=mod;
		f[0][0]=0;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				f[i][j]=min({f[i-1][j-1], f[i-1][j], f[i][j-1]});
				f[i][j]+=a[i][j];
//				cout <<f[i][j] <<" ";
			}
//			cout <<endl;
		}
		cout <<f[n][m] <<endl;
	}
}
