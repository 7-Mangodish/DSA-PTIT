#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n >>k;
		int f[n+1];
		fill(f+1,f+n+1, 0);
		f[0]=1;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=k; ++j){
				if(j<=i)
					f[i]+=f[i-j];
				f[i]%=mod;
			}
		}
		cout <<f[n];
	}
}
