#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int f[1005][1005];
int main(){
	int t;
	cin >>t;
	while(t--){
		int n, v;
		cin >>n >>v;
		int w[n+1], val[n+1];
		for(int i=1; i<=n; i++)
			cin >>w[i];
		for(int i=1; i<=n; i++)
			cin >>val[i];
		memset(f, 0, sizeof f);
		for(int i=1; i<=n ;i++){
			for(int j=1; j<=v; j++){
				if(j>=w[i])
					f[i][j]=max(val[i]+f[i-1][j-w[i]], f[i-1][j]);
				else
					f[i][j]=f[i-1][j];
			}
		}
		cout <<f[n][v] <<endl;
	}
}
