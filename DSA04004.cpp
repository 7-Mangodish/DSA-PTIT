#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

ll bipow(ll a, ll b){
	if(b==0)
		return 1;
	ll x=bipow(a,b/2);
	if(b%2==0)
		return x*x;
	return x*x*a;
}

ll sol(ll n, ll k){
	ll ind=bipow(2,n-1);
	if(k==ind)
		return n;
	if(k>ind)
		return sol(n-1,k-ind);
	return sol(n-1,k);
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ll n,k;
		cin >>n >>k;
		ll ans=sol(n,k);
		cout <<ans;
		cout <<endl;
	}
}
