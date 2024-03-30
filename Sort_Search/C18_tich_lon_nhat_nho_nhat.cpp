#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			ll m,n;
			cin >>m >>n;
			ll a[m], b[n];
			for(ll &x:a)
				cin >>x;
			for(ll &x:b)
				cin >>x;
			sort(a, a+m, greater<ll>());
			sort(b, b+n);
			ll ans=a[0]*b[0];
			cout <<ans <<endl;
		}
}
