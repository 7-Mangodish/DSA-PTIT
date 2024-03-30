#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int bi_pow(int a, int k){
	if(k==0)
		return 1;
	int x=bi_pow(a, k/2);
	if(k%2==0)
		return x*x;
	return x*x*a;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,m;
		cin >>n >>m;
		int a[n], b[m];
		for(int &x:a)
			cin >>x;
		for(int &x:b)
			cin >>x;
		sort(a, a+n);
		sort(b, b+m);
		int ans=0;
		for(int x:a){
			int r=0;
			int tmp=bi_pow(x, b[0]);
			while(r <m && bi_pow(b[r], x)<tmp ){
				cout << x<< " " <<b[r] <<endl;
				++ans;
				++r;
			}
		}
		cout <<ans;
	}
}
