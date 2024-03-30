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
			int a[n];
			for(int &x:a)
				cin >>x;
			sort(a, a+n, greater <int>());
			for(int i=0; i<k; i++)
				cout <<a[i] <<" ";
			cout <<endl;
		}
}
