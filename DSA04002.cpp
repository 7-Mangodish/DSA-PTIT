#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
ll bi_pow(ll a, ll b ){
	if(b==0)
		return 1;
	ll x=bi_pow(a,b/2);
	if(b%2==0)
		return ((x%mod)*(x%mod))%mod;
	else
		return( x%mod*x%mod*a) %mod;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		ll a=stoll(s);
		reverse(s.begin(), s.end());
		ll b=stoll(s);
		ll ans=bi_pow(a,b)%mod;
		cout <<ans <<endl;
	}
}
