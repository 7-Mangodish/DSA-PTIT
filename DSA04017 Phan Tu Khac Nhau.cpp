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
		ll a[n], b[n-1];
		for(ll &x:a)
			cin >>x;
		for(ll &x:b)
			cin >>x;
		int l=0,r=0;
		while(l<n && r<n-1 && a[l]==b[r]){
			++l;
			++r;
		}
		cout <<r+1 <<endl;
	}
}
