#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
ll bipow(ll a, ll b){
	if(b==0)
		return 1;
	ll x=bipow(a,b/2);
	if(b%2==0)
		return (x%mod*x%mod)%mod;
	return (x%mod * x%mod * a%mod)%mod;
}
int main(){
	ll a=INT_MAX,
	b=INT_MAX;
	while(!(a==0 & b==0)){
		cin >>a >>b;
		if(a==0 && b==0)
			break;
		ll ans=bipow(a,b);
		ans%=mod;
		cout <<ans <<endl;

	}
}