#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

bool chk(int a[],int n){
	int l=0,r=n-1;
	int sum=a[l]+a[r];
	while(l<r){
		++l;
		--r;
		if(a[l]+a[r]!=sum)
			return false;
	}
	return true;
}
	
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for(int i=0; i <n; i++){
			cin >>a[i];
		}
		if(chk(a,n))
			cout <<"Yes\n";
		else
			cout <<"No\n";	
	}
}
