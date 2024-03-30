#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int ts[100001];

bool cmp(int a, int b){
	if(ts[a]>ts[b])
		return true;
	if(ts[a]<ts[b])
		return false;
	return a<b;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{

			int n;
			cin >>n;
			int a[n];
			int MAx=0;
			for(int i=0; i<n; i++)
			{
				cin >>a[i];
				MAx=max(MAx,a[i]);
				ts[a[i]]++;
			}
			sort(a,a+n,cmp);
			for(int x:a)
				cout <<x <<" " ;
			for(int i=0; i<=MAx; i++)
				ts[i]=0;
			cout <<endl;
		}
}
