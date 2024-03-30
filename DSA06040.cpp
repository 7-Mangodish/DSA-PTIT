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
		bool ok=false;
		int n1,n2,n3;
		cin >>n1 >>n2 >>n3;
		ll a[n1],b[n2],c[n3];
		for(ll x:a)
			cin >>x;
		for(ll x:b)
			cin >>x;
		for(ll x:c)
			cin >>x;
			
		vector <ll> v1,v2;
		int ind1=0;
		while(ind1 <n2){
			if(a[ind1]==b[ind1]){
				v1.push_back(b[ind1]);
				
			}
		}
		if(ok){
			for(auto x:s3){
				cout <<x<<" ";
			}
		}
		else
			cout <<-1;
		cout <<endl;
	}
}

