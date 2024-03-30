#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int crosssum(int a[], int l, int m, int r){
	int s=0;
	int suml=INT_MIN,i=m;
	while(i>=l){
		s+=a[i];
		suml=max(suml,s);
		i--;
	}
	s=0;
	int sumr=INT_MIN, j=m+1; // xet tu vi tri l,m,r. Gia su l=0,r=1--> m=0 --> j=m+1
	while(j<=r){
		s+=a[j];
		sumr=max(sumr,s);
		j++;
	}
	return max(max(suml,sumr), suml+sumr);
}

int sum(int a[], int l , int r){
	if(l==r)
		return a[l];
	int m=(l+r)/2;
	return max(max(sum(a,l,m), sum(a,m+1,r)), crosssum(a,l,m,r));
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for(auto &x:a)
			cin >>x;
		int ans=sum(a,0,n-1);
		cout <<ans <<endl; 
	}
}	
