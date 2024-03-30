#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int a[100], n, k;
bool ok, chk;

void ktao(){
	for(int i=0; i<n; i++)
		a[i]=0;
}

void sinh(){
	if(k>0 && k<=(n-1)/2)
	{
		if(a[k]==0 && chk== false)
		{
			a[k]=1;
			a[n-1-k]=1;
			--k;
		}
		if(a[k]==0 && chk ==true)
		{
			a[k]=1;
			a[n-1-k]=1;
			++k;
		}	
	}
	else if(k==0)
	{
		a[k]=1;
		a[n-1]=1;
		for(int i=1; i<n-1; i++)
			a[i]=0;
		chk=true;
		++k;
	}
	else
		ok=false;

}
int main(){
	cin >>n;
	ktao();
	ok=true;// check cau hinh cuoi
	chk=false; // bien de check xem da di het 1 vong chua
	k=(n-1)/2;
	while(ok)
		{
			for(int i=0; i<n; i++)
				cout <<a[i] <<" ";
			cout <<"\n";
			sinh();
		}

}
