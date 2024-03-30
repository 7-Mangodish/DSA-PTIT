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
			set <int> s;
			for(int i=0; i<n; i++)
				{
					cin >>a[i];
					s.insert(a[i]);
				}
			sort(a,a+n);
			int cnt=a[n-1]-a[0]+1;
			cout <<cnt-s.size() <<endl;
		}
}
