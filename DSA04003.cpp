#include<bits/stdc++.h>

#define mod 1000000007
#define m 123456789
#define ll long long

using namespace std;
//Mot so n co the duoc bieu dien thanh 2^(n-1) day con 

ll bi_pow(ll a, ll b){
	if(b==0)
		return 1;
	ll x=bi_pow(a,b/2);
	if(b%2==0)
		return ((x%m)*(x%m))%m;
	return ( x%m * x%m * a%m )%m;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ll n;
		cin >>n;
		ll ans=bi_pow(2,n-1)%m;
		cout <<ans <<endl;
	}
}
