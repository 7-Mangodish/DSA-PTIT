#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n >>k;
		int a[n];
		for(int &x:a)
			cin >>x;
		sort(a,a+n);
		ll cnt=0;
		for(int i=0; i<n-1; i++){
			auto it=lower_bound(a+i+1, a+n, a[i]+k); // Tim den phan tu thu j dau tien >= a[i] +k
			cnt+=(ll)(it-(a+i+1));
		}
		cout <<cnt <<endl;
	}
}
