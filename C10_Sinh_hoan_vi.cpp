#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int n, a[20];
bool ok=true;
void ktao(){
	for(int i=1; i<=n; i++)
		a[i]=i;
}

void sinh(){
	int i=n-1;
	while(a[i]>a[i+1])
		{
			--i;
			if(i==0)
				break;
		}
	if(i==0)
		ok=false;
	else
		{
			int j=n;
			while(a[j]<a[i])
				{
					--j;
				}
			swap(a[i],a[j]);
			sort(a+i+1, a+n+1);
		}
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			cin >>n;
			ktao();
			while(ok)
				{
					for(int i=1; i<=n; i++)
						cout <<a[i];
					cout <<" ";
					sinh();
				}
			ok=true;
			cout <<endl;
		}
}
