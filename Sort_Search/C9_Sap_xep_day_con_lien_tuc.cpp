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
			int n;
			cin >>n;
			int a[n+1];
			for(int i=1; i<=n; i++)
				{
					cin >>a[i];
				}
			int b[n+1];
			for(int i=1; i<=n; i++)
				{
					b[i]=a[i];
				}
			sort(a+1, a+n+1);
			int l=1, r=n;
			while(a[l]==b[l])
				{
					++l;
				}
			while(a[r]==b[r])
				{
					--r;
				}
			cout <<l <<" " <<r <<endl;
		}
}
