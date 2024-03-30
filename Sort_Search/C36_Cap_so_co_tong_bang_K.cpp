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
			ll n,k;
			cin >>n >>k;			
			ll a[n];
			for(int i=0; i<n; i++){
				cin >>a[i];
			}
			sort(a,a+n);
			ll cnt=0;
			for(int i=0; i<n; i++){
				ll tmp=k-a[i];
				auto it1=lower_bound(a+i+1,a+n, tmp),
				it2=upper_bound(a+i+1, a+n, tmp);
				cnt+= (ll)(it2-it1);
			}		
			cout <<cnt <<endl;
		}
}
