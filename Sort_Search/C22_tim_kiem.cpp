#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

bool biSearch(int a[], int n, int k){
	int l=0,
	r=n-1;
	while(l<=r)
		{
			int m=(l+r)/2;
			if(a[m] < k)
				{
					l=m+1;
				}
			else if(a[m] > k)
				{
					r=m-1;
				}
			else
				return true;
		}
	return false;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n,k;
			cin >>n >>k;
			int a[n];
			for(int &x:a)
				cin >>x;
			sort(a,a+n);
			if(biSearch(a,n,k))
				cout <<1 <<endl;
			else
				cout <<-1 <<endl;
		}
}
