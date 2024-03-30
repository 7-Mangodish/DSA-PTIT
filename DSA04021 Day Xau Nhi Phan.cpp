#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

ll f[93];

void fibo(){
	f[0]=0;
	f[1]=1;
	for(int i=2; i<93; i++){
		f[i]=f[i-1]+f[i-2];
	}	
}

int sol(ll n, ll k){
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	if(k>f[n-2])
		return sol(n-1,k-f[n-2]);
	return sol(n-2,k);
}

int main(){
	int t;
	cin >>t;
	fibo();
	while(t--){
		ll n,k;
		cin >>n >>k;
		cout <<sol(n,k) <<endl;
	}
}
