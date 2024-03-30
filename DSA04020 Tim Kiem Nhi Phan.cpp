#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int search(int a[], int n, int k){
	int l=0, r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==k)
			return m+1;
		if(a[m]< k)
			l=m+1;
		if(a[m]>k)
			r=m-1;
	}
	return 0;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n >>k;
		int a[n];
		for(auto &x:a)
			cin >>x;
		if(search(a,n,k)!=0)
			cout <<search(a,n,k);
		else
			cout <<"NO";
		cout <<endl;
	}
}
