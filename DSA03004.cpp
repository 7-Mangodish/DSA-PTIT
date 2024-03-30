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
		for(int &x:a)
			cin >>x;
		sort(a,a+n);
		ll a1=0,a2=0;
		for(int i=0; i<n; i++){
			if(i%2==0){
				a1=a1*10+a[i];
			}
			else{
				a2=a2*10+a[i];
			}
		}
		ll ans=a1+a2;
		cout <<ans <<endl;
	}
}
