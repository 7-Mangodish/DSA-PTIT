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
			int n,k;
			cin >>n >>k;
			int a[k+1];
			for(int j=1; j<=k; j++)
				cin >>a[j];
			int i=k;
			while(a[i]==n-k+i)
				{
					--i;
				}
			++a[i];
			for(int j=i+1; j<=k; j++)
				{
					a[j]=a[j-1]+1;
				}
			for(int j=1; j<=k; j++)
				cout <<a[j] <<" ";
			cout <<endl;
		}
	
}	
