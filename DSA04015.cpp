#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
// CACH KHAC: Dung lower_bound

int search(ll a[], int n, ll k){
	int res;
	int l=0, r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]<=k){
			res=m;
			l=m+1;
		}
		if(a[m]>k){
			r=m-1;
		}			
	}
	if(r<0)
		return -1;
	return res+1;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n>>k;
		ll a[n];
		for(auto &x:a)
			cin >>x;
		cout <<search(a,n,k) <<endl;
	}
}
