#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int f[100005];
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n >>k;
		memset(f, 0, sizeof f);
		f[0]=1;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=k; j++){
				if(i>=j){
					f[i]+=f[i-j];		
					f[i]%=mod;			
				}

			}
		}
		cout <<f[n] <<endl;
	}
}
