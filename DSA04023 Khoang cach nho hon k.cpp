#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
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
		sort(a, a+n);
		int ans=0;
		for(int i=0; i<n; i++){
			auto it=lower_bound(a, a+n, a[i]+k);
			it--;
			ans+=(it-(a+i));
		}
		cout <<ans <<endl;
	}
}
