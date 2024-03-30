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
		int a[n];
		for(int &x:a)
			cin >>x;
		sort(a, a+n);
		
		int tmp=(a[0]+a[n-1])/2;
		auto it=upper_bound(a, a+n, tmp);
		it--;
		int ind=it-a;
		
		int ans=n;
		for(int i=ind; i>=0; i--){
			if(lower_bound(a))
		}
	}
}
