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
		int a[n];
		for(auto &x:a)
			cin >>x;
		auto it=upper_bound(a,a+n,0);
		cout <<it-a <<endl;
	}
}
