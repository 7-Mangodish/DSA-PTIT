#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int n,k,a[20];
bool ok=true;

void ktao(){
	for(int i=1; i<=n; i++)
		a[i]=0;
}

void sinh(){
	int i=n;
	while(a[i]!=0)
		{
			--i;
			if(i==0)
				{
					ok=false;
					return;
				}
		}
	for(int j=i; j<=n; j++)
		{
			if(a[j]==0)
				a[j]=1;
			else
				a[j]=0;
		}
}

bool check(){
	int sum=0;
	for(int i=1; i<=n; i++)
		{
			sum+=a[i];
		}
	if(sum==k)
		return true;
	return false;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			cin >>n >>k;
			ktao();
			while(ok)
				{
					if(check())
						{
							for(int i=1; i<=n; i++)
							{
								cout <<a[i];
							}
							cout <<"\n";
						}
					sinh();
				}
			ok =true;
			cout <<endl;
		}
}
