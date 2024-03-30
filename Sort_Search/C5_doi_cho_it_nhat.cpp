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
			int n;
			cin >>n; 
			int a[n];
			for(int &i:a)
				cin >>i;
			int cnt=0;
			for(int i=0; i<n-1; i++)
				{
					int pos=i;
					for(int j=i+1; j<n; j++)
						{
							if(a[j]<a[pos])
								{
									pos=j;
								}
						}
					if(pos !=i)
						{
							swap(a[i],a[pos]);
							++cnt;
						}
				}
			
			cout <<cnt <<endl;
		}
}
