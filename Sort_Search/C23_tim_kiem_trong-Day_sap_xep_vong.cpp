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
			map <int,int> mp;
			for(int i=1; i<=n; i++)
				{
					int tmp;
					cin >>tmp;
					mp[tmp]=i;
				}
			cout <<mp[k] <<endl;
		}
}
