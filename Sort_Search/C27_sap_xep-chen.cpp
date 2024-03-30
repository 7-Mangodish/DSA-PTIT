#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	for(int &x:a)
		cin >>x;
	for(int i=0; i<n; i++)
		{
			int pos=i-1,
			key=a[i];
			while(key<a[pos] &&pos >=0)
				{
					a[pos+1]=a[pos];
					--pos;
				}
			a[pos+1]=key;
			cout <<"Buoc "<<i <<": ";
			for(int j=0; j<=i; j++)
				{
					cout <<a[j] <<" ";
				}
			cout <<endl;
		}
}
