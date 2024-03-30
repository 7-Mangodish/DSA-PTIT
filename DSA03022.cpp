#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
bool cmp(int a, int b){
	return abs(a)<abs(b);
}

int main(){
	int n;
	cin >>n;
	int a[n];
	for(int &x:a)	
		cin >>x;
	sort(a,a+n, cmp);
	ll m1=a[n-3]*a[n-2],
	m2=a[n-2]*a[n-1],
	m3=a[n-1]*a[n-2]*a[n-3];
	ll res=max(m1,m2);
	res=max(res,m3);
	cout <<res;
}
