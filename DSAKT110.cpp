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
		ll a[n+5], f[n+5];
		for(int i=1; i<=n; i++)
			cin >>a[i];
		f[0]=0;
		f[1]=a[1];
		for(int i=2; i<=n; i++){
			f[i]=max(a[i]+f[i-2], f[i-1]);
		}
		cout <<f[n] <<endl;
	}
}
