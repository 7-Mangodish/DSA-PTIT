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
				cin >>a[i];
			int p=n-1;
			while(a[p]>a[p+1])
				{
					--p;
					if(p==0)
						break;
				}
			if(p==0)
				{
					for(int i=n; i>=1; i--)
						cout <<a[i] <<" ";
					cout <<endl;
				}
			else
				{
					int j=n;
					while(a[j] <a[p])
						{
							--j;
						}
					swap(a[p],a[j]);
					sort(a+p+1,a+n+1);
					for(int i=1; i<=n; i++)
						cout <<a[i] <<" ";
					cout <<endl;
				}
			
		}
}
