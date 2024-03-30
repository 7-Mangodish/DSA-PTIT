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
	int k=1;
	for(int i=n-1; i>=0; i--)
		{
			bool ok=false;
			for(int j=0; j<i; j++)
				{
					if(a[j]>a[j+1])
						{
							swap(a[j],a[j+1]);
							ok=true;
						}
				}
			if(ok)
				{
					cout <<"Buoc " <<k++ <<": ";
					for(int x:a)
						cout <<x <<" ";
					cout <<endl;
				}
		}
}