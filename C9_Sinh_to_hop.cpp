#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int n,k;
int a[20];
bool ok=true;
void ktao(){
	for(int i=1; i<=k; i++)
		{
			a[i]=i;
		}
}

void sinh(){
	int i=k;
	while(a[i]==n-k+i)
		{
			--i;
		}
	if(i==0)
		{
			ok=false;
		}
	else
		{
		++a[i];
		for(int j=i+1; j<=k; j++)
			{
				a[j]=a[j-1]+1;
			}		
		}
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
					for(int i=1; i<=k; i++)
						cout <<a[i];
					cout <<" ";
					sinh();
				}
			ok=true;
			cout <<endl;
		}
}
