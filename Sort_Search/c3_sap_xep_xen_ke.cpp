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
			int a[n];
			for(int i=0; i<n; i++)
				{
					cin >>a[i];
				}
			sort(a,a+n, greater <int>());
			int l=0,r=n-1;
			while(l<r)
				{
					cout <<a[l] <<" " <<a[r] <<" ";
					++l;
					--r;
				}
			if(n%2==1)
				cout <<a[l];
			cout <<endl;
		}
}
