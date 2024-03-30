#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
ll bi_pow(int a,int b){
	if(b==0)
		return 1;
	if(b%2==0)
		return ( (bi_pow(a,b/2)%mod )* (bi_pow(a,b/2)%mod) )%mod;
	else 
		return ( bi_pow(a,b/2)%mod * bi_pow(a,b/2)%mod * a)%mod ;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n >>k;
		ll ans=bi_pow(n,k)%mod;
		cout <<ans <<endl;
	}
}
