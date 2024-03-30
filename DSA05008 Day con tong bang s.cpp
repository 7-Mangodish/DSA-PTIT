#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int f[205][40005];// f[i][j]: gia tri co the tao duoc tu i phan tu
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,s;
		cin >>n >>s;
		int a[n+1];
		for(int i=1; i<=n; i++)
			cin >>a[i]	;
			
		memset(f, 0, sizeof f);
		for(int i=0; i<=n; i++)
			f[i][0]=1;
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=s; j++){
				if(j>=a[i])
					f[i][j]=max(f[i-1][j-a[i]], f[i-1][j]);
				else
					f[i][j]=f[i-1][j];
			}
		}
		if(f[n][s])
			cout <<"YES";
		else
			cout <<"NO";
		cout <<endl;
	}
}
