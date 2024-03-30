#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
void test(ll n, ll k){
	ll a[n];
	for(ll &x:a)
		cin >>x;
	sort(a,a+n);
	ll cnt=0;
	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n; j++){
			ll tmp=k-a[i]-a[j];
			auto it=lower_bound(a+j+1, a+n, tmp);
//			cout <<it-(a+j+1) <<endl;
			cnt+=(ll)(it-(a+j+1));
		}
	}
	cout <<cnt <<'\n';
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n, k;
		cin >>n >>k;
		test(n,k);
	}
}
