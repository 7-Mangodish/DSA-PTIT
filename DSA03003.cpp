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
		int a[n];
		for(int &x:a)
			cin >>x;
		sort(a,a+n);
		ll cnt=0;
		for(int i=0; i<n; i++){
			cnt+=(a[i]*i)%mod;
		}
		cout <<cnt%mod <<endl;
	}
}
