#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

bool test(ll a[], ll n){
	for(int i=0; i<n-2; i++){
		int l=i+1, r=n-1;
		ll tmp=a[i]*a[i];
		while(l<r){
			ll x1=a[l]*a[l],
			x2=a[r]*a[r];
			if(x1+x2 ==tmp)
				return true;
			else if(x1+x2 >tmp)
				++l;
			else
				--r;
		}
	}
	return false;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ll n;
		cin >>n;
		ll a[n];
		for(ll &x:a)
			cin >>x;
		sort(a,a+n, greater <int> ());
		if(test(a,n))
			cout <<"YES\n";
		else
			cout <<"NO\n"; 
	}
}
