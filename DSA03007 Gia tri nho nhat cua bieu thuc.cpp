#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		ll a[n], b[n];
		for(ll &x:a)
			cin >>x;
		for(ll &x:b)
			cin >>x;
		sort(a, a+n);
		sort(b, b+n, greater <int>());
		ll ans=0;
		for(int i=0; i<n; i++){
			ans+=a[i]*b[i];
		}
		cout <<ans <<endl;
	}
}