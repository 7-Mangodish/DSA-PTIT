#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		ll  f[n+1];
		memset(f,0, sizeof f);
		f[0]=1;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=3; j++){
				if(i>=j)
					f[i]+=f[i-j];
			}
		}
		cout <<f[n] <<endl;
	}
}
