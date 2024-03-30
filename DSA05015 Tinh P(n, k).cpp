#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

ll sol(int n, int k){
	if(k>n)
		return 0;
	ll res=1; 
	for(int i=n; i>=n-k+1; i--){
		res=(res%mod * i%mod)%mod;
	}
	return res;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n >>k;
		cout <<sol(n, k) <<endl;
	}
}
