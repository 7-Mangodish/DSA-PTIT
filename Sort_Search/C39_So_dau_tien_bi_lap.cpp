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
			map <int,int> mp;
			for(int i=0; i<n; i++)
				{
					cin >>a[i];
					mp[a[i]]++;
				}
			int ok=false;
			for(int i=0; i<n; i++)
				{
					if(mp[a[i]] >1)
						{
							cout <<a[i];
							ok=true;
							break;
						}
				}
			if(!ok)
				cout <<"NO";
			cout <<endl;
		}
}
