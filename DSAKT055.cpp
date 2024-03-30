#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int f[1005][1005];
int main(){
	int t;
	cin >>t;
	while(t--){
		memset(f, 0, sizeof f);
		int n,v;
		cin >>n >>v;
		int val[n+5], V[105];
		for(int i=1; i<=n; i++)
			cin >>V[i];
		for(int i=1; i<=n; i++)
			cin >>val[i];
			
		for(int i=1; i<=n; i++){
			for(int j=1; j<=v; j++){
				if(j>=V[i]){
					f[i][j]=max(val[i]+f[i-1][j-V[i]], f[i-1][j]);
				}
				else
					f[i][j]=f[i-1][j];	
			}
		}
		
		cout <<f[n][v]  <<endl;
	}
}
