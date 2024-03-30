#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

bool chk(int a[], int n, int k){
	for(int i=0; i<n-2; i++){
		int l=i+1, r=n-1;
		int s=k-a[i];
		while(l<r){
			if(a[l]+a[r]==s)
				return true;
			if(a[l]+a[r]>s)	
				--r;
			else
				++l;
		}
	}
	return false;
}	

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
		if(chk(a,n,k))
			cout <<"YES";
		else
			cout <<"NO";
		cout <<'\n';
	}
	
}
