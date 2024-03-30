#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n],
	ts[n]={0};
	for(int i=0; i<n; i++)
	{
		cin >>a[i];	
		ts[a[i]]=1;	
	}
	int x;
	cin >>x;
	ts[x]=0;
	for(int i=0; i<n; i++)
		{
			if(ts[a[i]]!=0)
				cout <<a[i] <<" ";
		}
	
}
