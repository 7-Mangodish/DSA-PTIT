#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int f[1005][1005];
//f[i][j]: to hop chap j cua i
int main(){
	int t;
	cin >>t;
	while(t--){
		int n, k;
		cin >>n >>k;
		memset(f, 0, sizeof f);
		for(int i=0; i<=n; i++) // truong hop co so
			f[i][0]=1;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=k; j++){
				if(i==j)
					f[i][j]=1;
				if(i>j){
					f[i][j]=f[i-1][j]+f[i-1][j-1];
					f[i][j]%=mod;
				}
			}
		}
		cout <<f[n][k] <<endl;
	}
}
